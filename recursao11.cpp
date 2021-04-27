#include<stdio.h>

float potencia(float base,float expoente)
{
	if(expoente==0)
	{
		return 1;
		
	}else if(expoente>0)
	{
		return base*potencia(base,expoente-1);
	}else if(expoente<0)
	{
		return 1/base*potencia(base,-expoente);
	}
}

int main()
{
	printf("Base 2 Expoente 2 %f",potencia(2,2));
	return 0;
}
