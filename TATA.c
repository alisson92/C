#include <stdio.h>
int main(void)
{
	double posicao, vet[5], soma=0, media;
	
	for (posicao=0;posicao<=4;posicao++)
		scanf(" %f", &vet);
		soma=soma+posicao;
		media=soma/5;
	
	if (vet[5] > media)
	 printf ("A note é igual ", media);
	return  0;
	
}
