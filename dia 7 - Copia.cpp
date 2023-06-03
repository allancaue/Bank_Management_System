#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
	
	struct cadastro{
		char nome[30],email[20],cidade[20],senha[10];
		int cpf,cep;
	};
	
	struct dinheiro{
	float salario,deposito,valor,total;
	int sacar;	
	};

	 struct cadastro cad;
	 struct dinheiro din;
 
 	void imagem_cad(){
	 	printf("\t\t\t#########################################\n");
	 	printf("\t\t\t#########################################\n");
	 	printf("\t\t\t-----------------CADASTRO----------------\n");	
	 	printf("\t\t\t#########################################\n");
	 	printf("\t\t\t#########################################\n");	 	
	 }
	 
	 void imagem_login(){
	 	
		printf("\t\t\t#########################################\n");
	 	printf("\t\t\t#########################################\n");
	 	printf("\t\t\t-----------------LOGIN-------------------\n");	
	 	printf("\t\t\t#########################################\n");
	 	printf("\t\t\t#########################################\n");		
	 }
	 
 	void cadastro(){
 	 
	   imagem_cad();
 		
 		printf("\nInformer seu nome:\n");
		 scanf("%s",&cad.nome);	
		 	
 		printf("Informer seu E-mail:\n");
 		 scanf("%s",&cad.email);
 		 
 		 printf("Digite sua senha: \n");
 		 scanf("%d",cad.senha);
 		 
 		printf("Digite o numero do seu CPF:\n");
 		 scanf("%d",&cad.cpf);
 		 
 		printf("Informe sua cidade:\n");
 		 scanf("%s",&cad.cidade);
 		 
 		printf("Digite o numero do seu Cep:\n");
 		 scanf("%d",&cad.cep);
 		
 		system("cls");
 		
 	  	imagem_cad();
 	  	
 		printf("Seu nome:%s \n",cad.nome);
 		
 		printf("Seu E-mail:%s \n",cad.email);
 		
 		printf("Sua senha e:%d \n",cad.senha);
 		
 		printf("Seu CPF:%d \n",cad.cpf);
 		
 		printf("Sua cidade:%s \n",cad.cidade);
 		
 		printf("Seu Cep:%d \n",cad.cep);
 		
	 }
	 void login(){
	 	imagem_login();
	 	printf("\nInfomer seu CPF: ");
	 	 scanf("%d",&cad.cpf);
	 	 
	 	 
	 }
 
 void op(){
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

	int main(){
		
		op();
		
		return 0;
		
}
