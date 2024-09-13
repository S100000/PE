#include <stdio.h>
#include <stdlib.h>
//Aloque espaço para uma seqüência de números reais escolhida pelo usuário. Receba os valores
//e imprima-os em ordem inversa. Utilizar função para alocação dinâmica.
void aloca(float **p, int tam);
void leitura(float *p, int tam);
void reverse(float *p, int tam);

int main()
{
	int tam;
	float *ptr = NULL;
	printf("digite quantos numeros vc gostaria que fosse impressos: ");
	scanf("%i", &tam);
	aloca(&ptr, tam);
	leitura(ptr, tam);
	reverse(ptr, tam);
	
	return 0;
}

void aloca(float **p, int tam)
{
	if((*p=(float *)realloc(*p, tam*sizeof(float))) == NULL)
	{
		exit(1);
	}
}

void leitura(float *p, int tam)
{
	int i;
	for(i = 0; i < tam; i ++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", p+i);
	}
}

void reverse(float *p, int tam)
{
	int i;
	for(i = tam-1; i >= 0; i --)
	{
		printf("\n%.2f", *(p+i));
	}
}