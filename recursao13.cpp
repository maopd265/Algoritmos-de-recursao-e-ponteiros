#include<stdio.h>

int menorValorArray(int vet[],int tamanho)
{
	static int aux = vet[tamanho];
	if(tamanho==0)
	{
		return aux;
	}else 
	{
	if (vet[tamanho]<aux)
	{
		aux=vet[tamanho];
		
	}
	return menorValorArray(vet,tamanho-1);
	}
}

int main()
{
	
	
	int vet[10]={1,23,3,-4,5,6,-17,8,9,0};
	int tamanho;
	scanf("%d",&tamanho);
	printf("\nMaior valor : %d",menorValorArray(vet,tamanho));
	return 0;
	
}
