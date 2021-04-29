#include<stdio.h>

int procuraNumero(int numero,int digito,int vezes)
{
	static int aux;
	if(numero==0)
	{
		return vezes;
	}
	else 
	{
		aux=numero%10;
	
		if(aux==digito)
		{
			vezes++;
		}
		return procuraNumero(numero/10,digito,vezes);
	}
	
}
int main ()
{
	printf("Exercicio: determinar quantas vezes um digito aparece em um numero real\n\n");
	
	printf("Numero base: 91817655\n");
	int numero=91817655,numeroProcurar,vezes=0;
	printf("\nDigite o numero que voce deseja procurar:");
	scanf("%d",&numeroProcurar);
	printf("Teste %d",procuraNumero(numero,numeroProcurar,vezes));
	
	return 0;
}
