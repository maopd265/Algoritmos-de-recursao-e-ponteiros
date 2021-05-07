#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int somaInt(int num1,int num2)
{
    return num1+num2;
}
int subInt(int num1,int num2)
{
    return num1-num2;
    
}
float somaFloat(float num1,float num2)
{
    return num1+num2;
}
float subFloat(float num1,float num2)
{
    return num1-num2;
   
}
int main()
{
	int number1,number2;
    float number3,number4;
    scanf("%d %d",&number1,&number2);
    scanf("%f %f",&number3,&number4);
    printf("%d %d\n",somaInt(number1,number2),subInt(number1,number2));
    printf("%.1f %.1f\n",somaFloat(number3,number4),subFloat(number3,number4));
    
    return 0;
}
