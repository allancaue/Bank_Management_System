#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"

cadastro cadt;

void imagem_login();

void login(const cadastro* cadl)
{
 	imagem_login();
 	  	
 	printf("Seu nome:%s \n",cadl->nome);
 		
 	printf("Seu E-mail:%s \n",cadl->email);
 		
 	printf("Sua senha e:%d \n",cadl->senha);
 		
 	printf("Seu CPF:%d \n",cadl->cpf);
 		
 	printf("Sua cidade:%s \n",cadl->cidade);
 		
 	printf("Seu Cep:%d \n",cadl->cep);

    system("pause");
}