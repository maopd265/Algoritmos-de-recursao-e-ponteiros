#include<stdio.h>
#include<stdlib.h>
int d=2;
int prim(int G[TAM][TAM]) {
int i ;
int U [TAM],d[TAM]; // i n i c i a l m e n t e nenhum v ´e r t i c e e s t ´a em U
for (i=0;i<TAM;i++) 
{
	U [ i ]= 0;
 	d [ i ]=INF ;
 }
d[0]=0; // i n i c i a r ´a montagem a p a r t i r do v ´e r t i c e 0
for(i=0;i<TAM;i++)
{
	int menor=INF , j , u ; // s e l e c i o n a v ´e r t i c e u de menor a r e s t a
for (j=0;j<TAM;j++)
	if (U[j]==0 && d[j]<menor) 
	{
	menor=d[j] ;
 	u=j;
 	}
U [u]=1; // i n c o r p o r a v ´e r t i c e u ao c o nj u n t o U
for (j=0; j<TAM;j++) // a t u a l i z a d i s t ˆa n c i a de t o d o s
// o s v ´e r t i c e s a d j a c e n t e s a u
	if(U[j]==0 && G [u][j]<d[j] )
	d [j]=G[u][j];
	}
int soma=0;
for ( i =0; i<TAM;i++) soma+=d[i];
	return soma;
}



int main()
{
	printf("\nAlgoritmo de Prim - Grafos\n")
	
	return 0;
}
