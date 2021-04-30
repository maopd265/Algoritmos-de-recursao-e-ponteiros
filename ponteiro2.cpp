#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

 


int main()
{
 int y=5;
 int  *yPtr=NULL;
 printf("y=%d\n",y);
 printf("yptr=%d\n",yPtr);

 yPtr=&y;
 printf("y=%d\n",y);
 printf("yptr=%d\n",yPtr);
  printf("*yptr=%d\n",*yPtr);
 
 	
	return 0;
}
