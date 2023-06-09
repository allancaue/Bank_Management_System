#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include<unistd.h>

void sair();

void Imprimir_cabecaclho() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);printf("<<Caixa Eletrônico>>"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);
	
	printf("|                                                                                                                                                    |\n");

	
	//botões
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|     1   Cadastro                                              |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");	
	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|     2   Login                                                 |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
		
		
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|     3   Sair                                                  |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                              |\n");
	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("Escolha(digite):");
}

void op_invalida() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);printf("<<Caixa Eletrônico>>"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                       Opcão inválida!                         |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
}

void grafico_cadastro() {
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);printf("<<Cadastro>>");         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                        |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
}

void login() {
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);printf("<<Login>>");            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                           |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
}

void grafico_de_operacoes_financeiras(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);printf("<<Caixa Eletrônico>>"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);
	
	printf("|                                                                                                                                                    |\n");

	
	//botões
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|     1   Realizar depósito                                     |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                       Realizar saque   2      |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");	
	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|     3   Ver saldo                                             |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                  Histórico de saques   4      |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");	
		
		
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|     5   Ver Cadastro                                          |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                    SAIR               6       |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("|     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("       "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("      |\n");	
	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("Escolha(digite):");
}


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
    printf("\n");
    printf("\tDigite seu nome: ");
    fgets(cad.nome, sizeof(cad.nome), stdin);

    printf("\tDigite seu E-mail: ");
    fgets(cad.email, sizeof(cad.email), stdin);

    // Validar e-mail
    if (strstr(cad.email, "@gmail.com") == NULL) {
        printf("\tE-mail inválido. Deve ser um e-mail do Gmail (@gmail.com).\n");
        return;
    }

    printf("\tDigite sua senha (até 10 caracteres): ");
    fgets(cad.senha, sizeof(cad.senha), stdin);

    printf("\tDigite sua idade: ");
    scanf("%d", &cad.idade);
    getchar();

    if (cad.idade < 18) {
        printf("\tVocê precisa ser maior de idade para se cadastrar.\n");
        return;
    }

    printf("\tInforme o CEP da sua cidade:\n");
    scanf("%d", &cad.cep);
    getchar();

    printf("\tInforme o nome da sua cidade:\n");
    fgets(cad.cidade, sizeof(cad.cidade), stdin);

    cad.saldo = 0; // Inicializar saldo com zero

    salvarCadastro();
}

bool verificarLogin() {
    char email[30], senha[10];

    printf("\n");

    printf("\tDigite seu E-mail: ");
    fgets(email, sizeof(email), stdin);

    printf("\tDigite sua senha: ");
    fgets(senha, sizeof(senha), stdin);

    if (strcmp(email, cad.email) == 0 && strcmp(senha, cad.senha) == 0) {
        return true; // Login válido
    }

    return false; // Login inválido
}

void realizarDeposito() {
    printf("\tDigite o valor do depósito: ");
    float deposito;
    scanf("%f", &deposito);
    getchar();

    if (deposito <= 0) {
        printf("\tValor inválido para depósito.\n");
        return;
    }

    din.deposito = deposito;
    cad.saldo += din.deposito;
    printf("\tDepósito realizado com sucesso.\n");
}

void realizarSaque() {
    printf("\tDigite o valor do saque: ");
    float saque;
    scanf("%f", &saque);
    getchar();

    if (saque <= 0) {
        printf("\tValor inválido para saque.\n");
        return;
    }

    if (saque > cad.saldo) {
        printf("\tSaldo insuficiente.\n");
        return;
    }

    din.saque = saque;
    cad.saldo -= din.saque;
    printf("\tSaque realizado com sucesso.\n");

    FILE *arquivo = fopen("historico.txt", "a");
    if (arquivo == NULL) {
        printf("\tErro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Saque: %.2f\n", din.saque);

    fclose(arquivo);
}

void verSaldo() {
    printf("\tSaldo atual: R$%.2f\n", cad.saldo);
}

void exibirHistoricoSaque() {
    FILE *arquivo = fopen("historico.txt", "r");
    if (arquivo == NULL) {
        printf("\tNenhum saque realizado.\n");
        return;
    }

    printf("=== Histórico de Saques ===\n");
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
}
void verCadastro() {
    printf("\n\t=== Cadastro ===\n");
    printf("\tNome: %s", cad.nome);
    printf("\tE-mail: %s", cad.email);
    printf("\tSenha: %s", cad.senha);
    printf("\tIdade: %d\n", cad.idade);
    printf("\tCEP: %d\n", cad.cep);
    printf("\tCidade: %s", cad.cidade);
    printf("\tSaldo: %.2f\n", cad.saldo);
}
void operacoesFinanceiras() {
    int opcao;

    while (true) {
        system("cls");
        grafico_de_operacoes_financeiras();
        printf("\n\tOpção: ");
        scanf("\t%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                realizarDeposito();
                system("pause");
                break;

            case 2:
                realizarSaque();
                system("pause");
                break;

            case 3:
                verSaldo();
                system("pause");
                break;

            case 4:
                exibirHistoricoSaque();
                system("pause");
                break;

            case 5:
                verCadastro();
                system("pause");
                break;

            case 6:
                salvarCadastro(); // Salvar cadastro antes de fazer logout
                system("cls");
                sair();
                return; // Logout

            default:
                system("cls");
                op_invalida();
                system("pause");
                break;
        }
    }
}

void sair() {
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);printf("<<Caixa Eletrônico>>"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                            Saindo...                          |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                     "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                              |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
}

void grafico_realizar_login() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                              "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);printf("<<Caixa Eletrônico>>"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                  |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                Login realizaedo com sucesso!                  |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
}


void grafico_email_ou_senha_invalidos() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                              "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);printf("<<Caixa Eletrônico>>"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);printf("                                                                  |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                   E-mail ou senha inválidos!                  |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("|                                                               |"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                        "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79); printf("+===============================================================+"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159); printf("                                           |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");	
	printf("|                                                                                                                                                    |\n");
	printf("|                                                                                                                                                    |\n");
	printf("+----------------------------------------------------------------------------------------------------------------------------------------------------+\n");
}


int main() {
	system("MODE CON cols=151 lines=100");
    setlocale(LC_ALL, "Portuguese");

    lerCadastro();

    int opcao;

     while (true) {
        Imprimir_cabecaclho();
        scanf("%d", &opcao);
        getchar();
        while (opcao == 0 || opcao > 3) {
            fflush(stdin);
            system("cls");
            op_invalida();
            system("pause");
            system("cls");
            break;
        }

        switch (opcao) {
            case 1:
                system("cls");
                grafico_cadastro();
                cadastro();
                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");
                login();
                lerCadastro();
                if (verificarLogin()) {
                    system("cls");
                    grafico_realizar_login();
                    system("pause");
                    system("cls");
                    operacoesFinanceiras();
                    system("pause");
                } else {
                    system("cls");
                    grafico_email_ou_senha_invalidos();
                    system("pause");
                }
                system("cls");
                break;

            case 3:
                system("cls");
                sair();
                salvarCadastro();
                return 0;
        }
    }

    return 0;
}
