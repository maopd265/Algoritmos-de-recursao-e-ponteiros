#include<stdio.h>
#define MAX 75 
#include<string.h>

//inversao de string e comparação para ver se é palindromo
char* Inversao(char str1[])
{
    static int i=0;
    static char str_inv[MAX];
    if(*str1)
    {
         Inversao(str1+1);
         str_inv[i++] = *str1;
    }else
    return (str_inv);
}

int main()
{

    char *str_invertida ,string1[MAX];
 
    printf("\n Insira uma string: ");
    scanf("%s",string1);

    str_invertida = Inversao(string1);

    printf("\n A string invertida eh: %s\n",str_invertida);
    if(strcmp(string1,str_invertida)==0)
    printf("eh palindromo\n");
    else 
    printf("nao eh palindromo \n");
 return 0; 
}
