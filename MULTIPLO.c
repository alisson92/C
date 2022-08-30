#include <stdlib.h>
#include <stdio.h>
int main()
 {
 	int numero, multiplo;
 	
 	printf("Digite um numero: ");
 	scanf(" %d", numero);
 	
 	if (numero%5==0)
 	{
 		printf("O numero ", numero, "eh multiplo de 5");
	
 		printf("O numero ", numero, "nao eh multiplo de 5");
	 }
	 
	 printf("\n");
 	return 0;
 }
