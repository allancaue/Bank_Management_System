#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"

void login(const cadastro* cadl);
void cadastro_fumc(cadastro* cad);

bool op()
{
	cadastro* cadm = (cadastro*)malloc(sizeof(cadastro));

	int op;
	bool rep = false;

	
		
	printf("Escolha uma opcao abaixo\n");
	printf("1---> Cadastro \n");
	printf("2--->Login\n");
	printf("3---> Sair\n");
	printf("\nOpcao: ");
	scanf("%d",&op);
	
	
	
	
	switch(op){
		
		case 1:
            system("cls");
            cadastro_fumc(cadm);
            system("cls");
            return true;
            break;
			
		case 2:
			system("cls");
			login(cadm);
            system("cls");
            return true;
            break;
		
		case 3:
            printf("Tachau");
			free(cadm);
            return false;
            break;
		
		default:
			printf("Opcao errada digite novamente \n\n");
			system("pause");
            return true;
		    break;
	}
	
}	