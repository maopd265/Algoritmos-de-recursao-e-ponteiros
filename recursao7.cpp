#include<stdio.h>
#include<stdlib.h>


//Crie um programa em Linguagem C 
//que conte os d�gitos de um determinado n�mero usando recurs�o.
int quantosDigitos(int num)
{
	static int cont=0;
	if(num!=0)
	{
	
	cont++;	
	return quantosDigitos(num/10);
	}
	else
	{
	return cont;	
	}
	
}


int main()
{
	int num;
	printf("Insira um valor:");
	scanf("%d",&num);
	printf("\nQuantos digitos: %d\n",quantosDigitos(num));
	return 0;
}
