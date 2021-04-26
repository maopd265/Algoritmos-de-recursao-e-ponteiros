#include<stdio.h>
#include<stdlib.h>
int valorTotal=0;

int somaDeElementosArray(int vetor[],int tamanho)
{
	if(tamanho==0)
	{
		return 0;
	}else
	{
		return vetor[tamanho-1] + somaDeElementosArray(vetor,tamanho-1);
	}
  
}
int main()
{
 int vetor[10]={1,2,3,4,5,6,7,8,9,10};
 printf("Soma dos valores de um array %d\n",somaDeElementosArray(vetor,10));
return 0;	
}
