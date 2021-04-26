#include<stdio.h>
#include<stdlib.h>

void somaRecursao(int numero)
{
	printf("antes do if:%d\n",numero);
	if(numero==100)
	{
		printf("no retorno:%d\n",numero);
		return;
	}else
	printf("chamada recursao:%d\n",numero);
	somaRecursao(numero+1);
}


int main()
{
	int i=1;
	somaRecursao(i);
}
