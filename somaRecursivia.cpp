#include<stdio.h>
int soma(int vet[],int tamanho)
{
	static int somaValores;
	if(tamanho<0)
	{
		return somaValores;
	}
	else
	{
		somaValores=somaValores+vet[tamanho];
		return soma(vet,tamanho-1);
	}
}


int main()
{
	int vet[3]={2,3,2};
	int somaVetor=soma(vet,3);
	printf("%d \n",somaVetor);
	return 0;
}
