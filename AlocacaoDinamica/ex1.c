#include <stdio.h>
#include <stdlib.h>
//Alocar espaço para 10 números reais. Mostrar o endereço e receber do usuário os valores. Em
//seguida, alterar esses valores, somando 30 a cada elemento. Mostrar novamente o endereço (que
//deve ser o mesmo) com o novo valor. Utilizar função para alocação dinâmica

void aloca(float **p, int tam);
void leitura(float *p, int tam);
void imprime(float *p, int tam);
void soma(float *p, int tam);

int main()
{
	float *ptr=NULL;
	
	aloca(&ptr, 10);
	leitura(ptr, 10);
	soma(ptr, 10);
	imprime(ptr, 10);
	return 0;
}

void aloca(float **p, int tam)
{
	if((*p= (float *)realloc(*p, tam*sizeof(float))) == NULL)
	{
		printf("Erro na Alocacao");
		exit(1);
	}
	printf("\nFuncao aloca - endereco %u", *p);
}

void leitura(float *p, int tam)
{
	int i;
	for(i = 0; i < tam; i ++)
	{
		printf("\ndigite um valor ");
		scanf("%f", p+i);
	}
}

void imprime(float *p, int tam)
{
	int i;
	
	for(i = 0; i < tam; i ++)
	{
		printf("\nEndereco: %u. Valor: %.2f ", p+i, *(p+i));
	}
}

void soma(float *p, int tam)
{
	int i; 
	for(i = 0; i < tam; i ++)
	{
		*(p+i) += 30;
	}
}