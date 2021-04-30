#include<stdio.h>
#include<stdlib.h>
//QUICK SORT
int compara(const void *x, const void *y)
{
	return (int)(*(int*)x-*(int*)y);
}
void ordenacaoVetor(int *vetor)
{
	 
	qsort(vetor,20,sizeof(int),compara);
}
void escreveVetor(int vetor[])
{
	for(int i=0;i<20;i++)
	{
	printf("\nvetor[%d]=%d",i,vetor[i]);
	} 
}
int main()
{
	int vetor[20]={9,1,7,6,3,4,1,7,3,2,9,1,7,6,3,4,1,7,3,2};
	escreveVetor(vetor);
	printf("\n------------------------------------------------------------\n");
	//ordenacaoVetor(vetor);
		qsort(vetor,20,sizeof(int),compara);
	escreveVetor(vetor);
	return 0;
}
