#include<stdio.h>

float potencia(float base,float expoente)
{
	if(expoente==0)
	{
		return 1;
	}
	else if(expoente>0)
	{
		return base*potencia(base,expoente-1);
	}
	else if(expoente<0)
	{
		return (1/base*potencia(base,-expoente));
	}
}
int main()
{
	printf("Resultado :%.2f \n",potencia(2,4));
	return 0;
}
