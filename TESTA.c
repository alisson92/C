#include <stdio.h>

int main()
{
	int cont, num, maior;
	maior = 0;
	
	for (cont=1;cont<=5;cont++)
	
	{
	  printf ("Digite um numero: ");
	  scanf(" %d", &num);
	  
	  if (num > maior)
	  maior = num;
	}
	printf("O maior numero foi %d", maior);
	return 0;
}

