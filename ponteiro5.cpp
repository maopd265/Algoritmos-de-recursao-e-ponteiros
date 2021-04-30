#include<stdio.h>
void trocaValores(int *a, int *b)
{
	static int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nfuncao A = %d",*a);
	printf("\nfuncao B = %d",*b);
}


int main()
{
  int a,b;
  a=2;
  b=3;
  	printf("\nentrada A = %d",a);
	printf("\nentrada B = %d",b);
	trocaValores(&a,&b);
	printf("\nsaida da funcao A = %d",a);
	printf("\n saida da funcao B = %d",b); 
	return 0;
}
