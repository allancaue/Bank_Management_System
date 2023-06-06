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
    float saque;
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

void cadastro() {
    printf("=== Cadastro ===\n");
    printf("Digite seu nome: ");
    fgets(cad.nome, sizeof(cad.nome), stdin);

    printf("Digite seu E-mail: ");
    fgets(cad.email, sizeof(cad.email), stdin);

    // Validar e-mail
    if (strstr(cad.email, "@gmail.com") == NULL) {
        printf("E-mail inválido. Deve ser um e-mail do Gmail (@gmail.com).\n");
        return;
    }

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

void realizarDeposito() {
    printf("Digite o valor do depósito: ");
    float deposito;
    scanf("%f", &deposito);
    getchar();

    if (deposito <= 0) {
        printf("Valor inválido para depósito.\n");
        return;
    }

    din.deposito = deposito;
    cad.saldo += din.deposito;
    printf("Depósito realizado com sucesso.\n");
}

void realizarSaque() {
    printf("Digite o valor do saque: ");
    float saque;
    scanf("%f", &saque);
    getchar();

    if (saque <= 0) {
        printf("Valor inválido para saque.\n");
        return;
    }

    if (saque > cad.saldo) {
        printf("Saldo insuficiente.\n");
        return;
    }

    din.saque = saque;
    cad.saldo -= din.saque;
    printf("Saque realizado com sucesso.\n");

    FILE *arquivo = fopen("historico.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Saque: %.2f\n", din.saque);

    fclose(arquivo);
}

void verSaldo() {
    printf("Saldo atual: R$%.2f\n", cad.saldo);
}

void exibirHistoricoSaque() {
    FILE *arquivo = fopen("historico.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum saque realizado.\n");
        return;
    }

    printf("=== Histórico de Saques ===\n");
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
}

void operacoesFinanceiras() {
    int opcao;

    while (true) {
        printf("Menu\n");
        printf("1 - Realizar depósito\n");
        printf("2 - Realizar saque\n");
        printf("3 - Ver saldo\n");
        printf("4 - Histórico de saques\n");
        printf("5 - Logout\n");
        printf("\nOpção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                realizarDeposito();
                break;

            case 2:
                realizarSaque();
                break;

            case 3:
                verSaldo();
                break;

            case 4:
                exibirHistoricoSaque();
                break;

            case 5:
                salvarCadastro(); // Salvar cadastro antes de fazer logout
                return; // Logout

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
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
                if (verificarLogin()) {
                    printf("Login realizado com sucesso.\n");
                    operacoesFinanceiras();
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