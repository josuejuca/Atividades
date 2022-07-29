//   Exercício C 003 - Somando dois números
//   Crie um programa que leia dois números e mostre a soma entre eles.

#include "stdio.h"
#include "locale.h"

int main ()
{
	int  n1 , n2 , soma;
	setlocale(LC_ALL,"");
	
	printf(" Informe o primeiro número: ");
	scanf("%d", &n1);
	
	printf(" Informe o segundo número: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf(" %d + %d = %d", n1 , n2 , soma);
}
