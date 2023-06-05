#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"

cadastro cad;

void imagem_cad();

void cadastro_fumc(cadastro* cad)
{
 	 
	imagem_cad();
 		
 	printf("\nInformer seu nome:\n");
	scanf("%s",&cad->nome);	
		 	
    printf("Informer seu E-mail:\n");
 	scanf("%s",&cad->email);
 		 
 	printf("Digite sua senha: \n");
 	scanf("%d",cad->senha);
 		 
    printf("Digite o numero do seu CPF:\n");
 	scanf("%d",&cad->cpf);
 		 
 	printf("Informe sua cidade:\n");
 	scanf("%s",&cad->cidade);
 		 
    printf("Digite o numero do seu Cep:\n");
 	scanf("%d",&cad->cep);
 		
 	system("cls");
 		
 	imagem_cad();
 	  	
 	printf("Seu nome:%s \n",cad->nome);
 		
 	printf("Seu E-mail:%s \n",cad->email);
 		
 	printf("Sua senha e:%d \n",cad->senha);
 		
 	printf("Seu CPF:%d \n",cad->cpf);
 		
 	printf("Sua cidade:%s \n",cad->cidade);
 		
 	printf("Seu Cep:%d \n",cad->cep);

    system("pause");
 		
}