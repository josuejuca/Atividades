//   Exercício C 002 - Respondendo ao Usuário
//   Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-vindas.

#include "stdio.h"
#include "locale.h"

int main()
{
	setlocale(LC_ALL,"");
	
	char nome[50];
	
	printf(" Informe seu nome: ", nome);
	scanf("%s", &nome);
	
	printf(" É um prazer te conhecer, %s", nome);
}
