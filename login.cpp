#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"

struct cadastro cadt;

void imagem_login();

void login()
{
	imagem_login();
	printf("\nInfomer seu CPF: ");
	scanf("%d",&cadt.cpf);
}