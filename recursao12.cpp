#include<stdio.h>


//achar o maior valor de um vetor

int maiorValorArray(int vet[],int tamanho)
{
	static int aux=vet[tamanho];
	if(tamanho==0)
	{
		return aux;
	}
	else
	{
		
		if(vet[tamanho]>aux)
		{
			aux=vet[tamanho];
		}
		return maiorValorArray(vet,tamanho-1);
	}
}

int main()
{
	int vet[10]={1,23,3,-4,5,6,17,8,9,0};
	int tamanho;
	scanf("%d",&tamanho);
	printf("\nMaior valor : %d",maiorValorArray(vet,tamanho));
	return 0;
}
