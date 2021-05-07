#include<stdio.h>
#include<locale.h>
//Recursive Digit Sum 
//Hackerrank

int superDigito(int num)
{
	static int aux;
	static int soma;
	aux= num%10;
	
	if(num==0)
	{
		return soma;
	}else
	{
	  soma = soma + aux;
	  return superDigito(num/10);	
	}
}


int main()
{
	setlocale (LC_ALL,"portuguese");
	printf("Super digito de 1234 é: %d\n",superDigito(1234));
	
	return 0;
}
