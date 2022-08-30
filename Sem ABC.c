#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num, ind, soma;
soma = 0;

for (ind=1;ind<=5;ind++)

{
	scanf ("%d",&num);

   if (num%2 == 0)

       soma=soma+num;

 } 

 printf("%d",soma);
}
