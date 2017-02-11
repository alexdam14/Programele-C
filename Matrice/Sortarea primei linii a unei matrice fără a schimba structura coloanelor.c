#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void citire(float a[][20],int *m,int *n)
{ int i,j;
  printf("nr linii=");scanf("%d",&*m);
  printf("nr coloane=");scanf("%d",&*n);
  for(i=0;i<*m;i++)
    for(j=0;j<*n;j++)
    {printf("a(%d,%d)=",i,j);
  scanf("%f",&a[i][j]);}
  }

void sortare(float a[][20],int m,int n)
{ int i,j,k;
  float aux;
  k=1;
  while(k)
   {k=0;
    for(i=0;i<n-1;i++)
      if(a[0][i]>a[0][i+1])
        for(j=0;j<m;j++)
         {aux=a[j][i];
          a[j][i]=a[j][i+1];
          a[j][i+1]=aux;
          k=1;} } }


void afisare(float a[][20],int m,int n)
{ int i,j;
  printf("\n");
  for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
      printf("\t%4.2f",a[i][j]);
    printf("\n");}
}

void main()
{
float a[100][20];
int m,n,q;
citire(a,&m,&n);
printf("\n\nMatricea initiala este :\n");
afisare(a,m,n);
sortare(a,m,n);
printf("\n\nMatricea modificata este :\n");
afisare(a,m,n);
scanf("%d",&q);

}