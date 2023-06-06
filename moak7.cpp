#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

struct Cadastro {
    char nome[30];
    char email[30];
    char senha[10];
    int idade;
    int cep;
    char cidade[30];
    float saldo;
} cad;

struct Dinheiro {
    float deposito;
    float sacar;
} din;

void salvarCadastro() {
    FILE *arquivo = fopen("cadastro.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%s", cad.nome);
    fprintf(arquivo, "%s", cad.email);
    fprintf(arquivo, "%s", cad.senha);
    fprintf(arquivo, "%d\n", cad.idade);
    fprintf(arquivo, "%d\n", cad.cep);
    fprintf(arquivo, "%s", cad.cidade);
    fprintf(arquivo, "%.2f\n", cad.saldo);

    fclose(arquivo);
}

void lerCadastro() {
    FILE *arquivo = fopen("cadastro.txt", "r");
    if (arquivo == NULL) {
        return;
    }

    fgets(cad.nome, sizeof(cad.nome), arquivo);
    fgets(cad.email, sizeof(cad.email), arquivo);
    fgets(cad.senha, sizeof(cad.senha), arquivo);
    fscanf(arquivo, "%d", &cad.idade);
    fscanf(arquivo, "%d", &cad.cep);
    fgets(cad.cidade, sizeof(cad.cidade), arquivo);
    fscanf(arquivo, "%f", &cad.saldo);

    fclose(arquivo);
}

void atualizarSaldo() {
    FILE *arquivo = fopen("cadastro.txt", "r+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fseek(arquivo, sizeof(cad.nome) + sizeof(cad.email) + sizeof(cad.senha) + sizeof(cad.idade) + sizeof(cad.cep) + sizeof(cad.cidade), SEEK_SET);
    fprintf(arquivo, "%.2f\n", cad.saldo);

    fclose(arquivo);
}

void cadastro() {
    printf("=== Cadastro ===\n");
    printf("Digite seu nome: ");
    fgets(cad.nome, sizeof(cad.nome), stdin);

    printf("Digite seu E-mail: ");
    fgets(cad.email, sizeof(cad.email), stdin);

    printf("Digite sua senha (até 10 caracteres): ");
    fgets(cad.senha, sizeof(cad.senha), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &cad.idade);
    getchar();

    if (cad.idade < 18) {
        printf("Você precisa ser maior de idade para se cadastrar.\n");
        return;
    }

    printf("Informe o CEP da sua cidade:\n");
    scanf("%d", &cad.cep);
    getchar();

    printf("Informe o nome da sua cidade:\n");
    fgets(cad.cidade, sizeof(cad.cidade), stdin);

    cad.saldo = 0; // Inicializar saldo com zero

    salvarCadastro();
}

bool verificarLogin() {
    char email[30], senha[10];

    printf("=== Login ===\n");

    printf("Digite seu E-mail: ");
    fgets(email, sizeof(email), stdin);

    printf("Digite sua senha: ");
    fgets(senha, sizeof(senha), stdin);

    if (strcmp(email, cad.email) == 0 && strcmp(senha, cad.senha) == 0) {
        return true; // Login válido
    }

    return false; // Login inválido
}

void dinheiro() {
    int opcao;

    printf("Menu\n");
    printf("1 - Realizar depósito\n");
    printf("2 - Realizar saque\n");
    printf("3 - Ver saldo\n");
    printf("4 - Logout\n");
    printf("\nOpção: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
        case 1: {
            printf("Digite o valor do depósito: ");
            float deposito;
            scanf("%f", &deposito);
            getchar();
            din.deposito = deposito;
            cad.saldo += din.deposito;
            printf("Depósito realizado com sucesso.\n");
            atualizarSaldo(); // Atualizar o saldo no arquivo
            dinheiro();
            break;
        }

        case 2: {
            printf("Digite o valor do saque: ");
            float saque;
            scanf("%f", &saque);
            getchar();
            din.sacar = saque;
            if (din.sacar > cad.saldo) {
                printf("Saldo insuficiente.\n");
            } else {
                cad.saldo -= din.sacar;
                printf("Saque realizado com sucesso.\n");
                atualizarSaldo(); // Atualizar o saldo no arquivo
            }
            dinheiro();
            break;
        }

        case 3:
            printf("Saldo atual: R$%.2f\n", cad.saldo);
            dinheiro();
            break;

        case 4:
            return; // Logout, não é necessário chamar salvarCadastro() aqui

        default:
            printf("Opção inválida. Tente novamente.\n");
            dinheiro();
            break;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    lerCadastro();

    int opcao;

    while (true) {
        printf("Menu\n");
        printf("1 - Cadastro\n");
        printf("2 - Login\n");
        printf("3 - Sair\n");
        printf("\nOpção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                cadastro();
                break;

            case 2:
                lerCadastro();
                if (verificarLogin()) {
                    printf("Login realizado com sucesso.\n");
                    dinheiro();
                } else {
                    printf("E-mail ou senha inválidos.\n");
                }
                break;

            case 3:
                salvarCadastro(); // Salvar cadastro antes de encerrar o programa
                return 0; // Encerrar o programa

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}