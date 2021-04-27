#include<stdio.h>

int fatorial(int numero)
{
	if(numero==0)
	{
		return 1;
	}
	else
	{
		return numero*fatorial(numero-1);
	}
}


int main()
{
	printf("%d",fatorial(3));
	return 0;
}

