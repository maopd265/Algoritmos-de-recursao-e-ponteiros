#include<stdio.h>

void ponteiro(int *numero)
{
	*numero=2;
}


int main()
{
	int numero=5;
	ponteiro(&numero);
	printf("%d",numero); 
	return 0;
}
