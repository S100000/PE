#include <stdio.h>
#include <stdlib.h>
//Alocar espaço para 10 números reais. Mostrar o endereço e receber do usuário os valores. Em
//seguida, alterar esses valores, somando 30 a cada elemento. Mostrar novamente o endereço (que
//deve ser o mesmo) com o novo valor. Utilizar função para alocação dinâmica

void aloca(float **p, int tam);
void leitura(**p, tam);

int main()
{
	float *ptr=NULL;
	
	aloca(&ptr, 10);
	
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

void leitura(**p, tam)
{
	int i;
	float valor;
	for(i = 0; i < tam; i ++)
	{
		printf("\ndigite um valor");
		scanf("%f", &valor);
		*(p+i) = valor;
	}
}