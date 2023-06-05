#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

    //NOVO SITESMA PARA ARMAZENAR OS CADASTROS

//struct Cadastro {
   // char nome[30];
    //char email[30];
   // char senha[10];
   // int idade;
   // int cep;
   // char cidade[30];
    //float saldo;
//} cad;

//struct Dinheiro {
   // float deposito;
   // float sacar;
//} din;

//void salvarCadastro() {
  //  FILE *arquivo = fopen("cadastro.txt", "w");
  //  if (arquivo == NULL) {
     //   printf("Erro ao abrir o arquivo.\n");
    //    return;
   // }

struct cadastro {
    char nome[30], email[20], cidade[20], senha[10];
    int cpf, cep, idade;
};

struct dinheiro {
    float salario, deposito, valor, total;
    int sacar;
};

struct cadastro cad;
struct dinheiro din;

void imagem_cad() {
    printf("\t\t\t#########################################\n");
    printf("\t\t\t#########################################\n");
    printf("\t\t\t-----------------CADASTRO----------------\n");
    printf("\t\t\t#########################################\n");
    printf("\t\t\t#########################################\n");
}

void imagem_login() {
    printf("\t\t\t#########################################\n");
    printf("\t\t\t#########################################\n");
    printf("\t\t\t-----------------LOGIN-------------------\n");
    printf("\t\t\t#########################################\n");
    printf("\t\t\t#########################################\n");
}

void cadastro() {
    imagem_cad();

    printf("\nInforme seu nome:\n");
    scanf("%s", cad.nome);

    printf("Informe seu E-mail:\n");
    scanf("%s", cad.email);

    printf("Digite sua senha: \n");
    scanf("%s", cad.senha);

    printf("Digite o numero do seu CPF:\n");
    scanf("%d", &cad.cpf);

    printf("Informe sua idade:\n");
    scanf("%d", &cad.idade);

    if (cad.idade < 18) {
        printf("Você nao tem idade suficiente para se cadastrar.\n");
        return;
    }

    printf("Informe sua cidade:\n");
    scanf("%s", cad.cidade);

    printf("Digite o numero do seu Cep:\n");
    scanf("%d", &cad.cep);

    system("cls");

    imagem_cad();

    printf("Seu nome: %s \n", cad.nome);

    printf("Seu E-mail: %s \n", cad.email);

    printf("Sua senha e: %s \n", cad.senha);

    printf("Seu CPF: %d \n", cad.cpf);

    printf("Sua idade: %d \n", cad.idade);

    printf("Sua cidade: %s \n", cad.cidade);

    printf("Seu Cep: %d \n", cad.cep);
}

void login() {
    imagem_login();
    printf("\nInforme seu CPF: ");
    scanf("%d", &cad.cpf);

    printf("Informe sua idade:\n");
    scanf("%d", &cad.idade);

    if (cad.idade < 18) {
        printf("Você não tem idade suficiente para acessar o sistema.\n");
        return;
    }
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

    switch (opcao) {
        case 1:
            printf("Digite o valor do deposito: ");
            scanf("%f", &din.deposito);
            din.total += din.deposito;
            printf("Depósito realizado com sucesso.\n");
            dinheiro();
            break;

        case 2:
            printf("Digite o valor do saque: ");
            scanf("%f", &din.sacar);
            if (din.sacar > din.total) {
                printf("Saldo insuficiente.\n");
            } else {
                din.total -= din.sacar;
                printf("Saque realizado com sucesso.\n");
            }
            dinheiro();
            break;

        case 3:
            printf("Saldo atual: R$%.2f\n", din.total);
            dinheiro();
            break;

        case 4:
            printf("Logout realizado.\n");
            break;

        default:
            printf("Opcao invailida.\n");
            dinheiro();
            break;
    }
}

bool op() {
    int op;

    printf("Escolha uma opcao abaixo\n");
    printf("1 - Cadastro \n");
    printf("2 - Login\n");
    printf("3 - Sair\n");
    printf("\nOpção: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            system("cls");
            cadastro();
            return true;
            break;

        case 2:
            system("cls");
            login();
            if (cad.idade >= 18) {
                dinheiro();
            }
            return true;
            break;

        case 3:
            printf("Tchau.\n");
            return false;
            break;

        default:
            printf("Opcao invailida. Digite novamente.\n");
            return true;
            break;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
  
    
	do
	{
		system("cls");
	} while (op() == true);



    return 0;
}
