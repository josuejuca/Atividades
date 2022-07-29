//   Exercício C 004 - Antecessor e Sucessor

#include "stdio.h"
#include "locale.h"

int main()
{
	setlocale(LC_ALL,"");
	int n;
	
	printf(" Digite um número: ");
	scanf("%d", &n);
	
	printf("\n O Antecessor é: %d \n", n - 1);
	printf(" O Sucessor é: %d", n + 1);
	
}
