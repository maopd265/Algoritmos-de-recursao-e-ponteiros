#include<stdio.h>

void contadorRecursivo(int i)
{
	printf("\ni=%d",i);
	if(i==100)
	{
		return;
	}else
	{
		contadorRecursivo(i+1);
	}
}

int main ()
{
	int i=0;
	contadorRecursivo(i);
	return 0;
}
