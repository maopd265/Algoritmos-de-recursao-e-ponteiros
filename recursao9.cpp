#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Escrever uma função recursiva que calcule o valor de a elevado a b


float potencia(float base, float expoente);

int main ()
{
	
	
 system("color a");
 
  setlocale(LC_ALL, "Portuguese");
  printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");
  float base,expoente;
  printf("\nDigite dois valores\n");
  printf("Base:");
  scanf("%f",&base);
  printf("\nExpoente:");
  scanf("%f",&expoente);
 printf("%.2f\n\n",potencia(base,expoente));
  system("pause");
   
	
	return 0;
}

float potencia(float base, float expoente)
{
	if(expoente==0)
	{
		return 1;
	}
	else if(expoente>0)
	{
		return base*potencia(base,expoente-1);
	}else 
	{
		return (1/potencia(base,-expoente));
	}
}
