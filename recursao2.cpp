#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void algoritmoRecursivo(int numero)
{
	printf("antes do if:%d\n",numero);
	if(numero==1)
	{
		printf("no retorno:%d\n",numero);
		return;
	}else
	printf("chamada recursao:%d\n",numero);
	return algoritmoRecursivo(numero-1);
}

int main()
{
	int i=1000;
	algoritmoRecursivo(i);
}
