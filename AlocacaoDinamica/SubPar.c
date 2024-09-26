#include <stdio.h>
#include <stdlib.h>
void aloca(int **p, int tam);
void leitura(int *p);
void mostra(int *p, int tam);
void subtracao(int *p, int tam, int **pp, int *qp);

int main()
{
	int tam=0, *ptr=NULL, *pp = NULL, qp = 0;
	char op;
	
	do
	{
		aloca(&ptr, tam+1);
		leitura(ptr+tam);
		tam++;
		printf("\nDeseja continuar? s/n: ");
		scanf("%c", &op);
		fflush(stdin);
	}while(op =='s' || op == 'S');
	mostra(ptr, tam);
	subtracao(ptr, tam, &pp, &qp);
	printf("\n\nSubtracoes pares: ");
	mostra(pp, qp);
	return 0;
}

void aloca(int **p, int tam)
{
	if((*p = (int*)realloc(*p, tam*sizeof(int))) == NULL)
	{
		exit(1);
	}
}

void leitura(int *p)
{
	printf("\ndigite um numero: ");
	scanf("%i", p);
	fflush(stdin);
}

void mostra(int *p, int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("\nEndereco %u: %i", p+i, *(p+i));
	}
}

void subtracao(int *p, int tam, int **pp, int *qp)
{
	int i, j, sub;
	
		for(i = 0, j = 0; i <= tam/2; i++, j++)
		{
			if(j+1+i > tam-1)
			{
				sub = *(p+(i+i));
			}
			else
			{
				sub = *(p+(j+1+i)) - *(p+(i+i));
			}
	
			if(sub%2 == 0)
			{
				aloca(pp, *(qp)+1);
				*(*pp+*qp) = sub;
				(*qp)++;
			}
		}
}