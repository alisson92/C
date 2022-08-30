#include <stdio.h>
#include <stdlib.h>
int main()
  {
		float salario, maiorsalario, menorsalario;
		int cont;
		maiorsalario=0;
		menorsalario=0;
		
		for (cont=1;cont<=5;cont++)
		{
			printf("Digite o seu salario: ");
			scanf(" %f \n", &salario);
							
		if (salario > maiorsalario)
			maiorsalario = salario;		
		}

		{
			printf("O maior salario foi %.2f", maiorsalario);
		}
  		return 0;	
  }
