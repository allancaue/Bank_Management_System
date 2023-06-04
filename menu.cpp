#include <stdio.h>
#include <stdlib.h>

void login();
void cadastro();

void op()
{
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
            cadastro();
            break;
			
		case 2:
			system("cls");
			login();
            break;
		
		case 3:
            printf("Tachau");
            break;
		
		default:
			printf("Opcao errada digite novamente ");
		    break;
	}
	
}	