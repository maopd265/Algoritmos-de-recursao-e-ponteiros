#include<stdio.h>
#include<stdlib.h>

int multiplicacaoElementosArray(int vetor[],int tamanho)
{
	if(tamanho==0)
	{
		return 1;
	}
	else
	{
		return (vetor[tamanho-1]*multiplicacaoElementosArray(vetor,tamanho-1));
	}
}


int main()
{
	int vetor[10]={1,2,3,4,5,6,7,8,9,10};
	printf("Multiplicacao:%d\n",multiplicacaoElementosArray(vetor,3));
	return 0;
}
