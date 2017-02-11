#include<stdio.h>
void citire(float a[][20],int *m,int *n)
{ int i,j;
  printf("Introduceti numarul de linii: ");scanf("%d",&*m);
  printf("Introduceti numarul de coloane: ");scanf("%d",&*n);
    }
void afisare(float a[][20],int m,int n)
{ int i,j;
  printf("\n");
  for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		{if(j<=i)a[i][j]=1;
	if(i==0 && j>0)a[i][j]=1;
	if(j>i && i!=0)a[i][j]=0;}
  for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
      printf("\t%4.0f",a[i][j]);
    printf("\n");}
}

void main()
{
float a[100][20];
int m,n,q,i,j;
citire(a,&m,&n);
afisare(a,m,n);
scanf("%d",&q);

}