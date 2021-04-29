#include<stdio.h>

void print_bin(int x)
{
   if ( x == 0 ) 
   {
     printf("0");
     return;
   }
   print_bin(x / 2);
   printf("%d", x % 2);
}

int main()
{
	int numeroDecimal=65;
	printf("numero decimal=%d\n",numeroDecimal);
	print_bin(numeroDecimal);
	
	return 0;
}
