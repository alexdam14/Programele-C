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
void afisare(float a[][20],int m,int n)
{ int i,j;
  printf("\n");
  for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
      printf("\t%4.2f",a[i][j]);
    printf("\n");}
}

float minim(float a[][20],int m,int n)
{ int i,j;
  float min;
  min=a[0][0];
  for(i=0;i<m;i++)
     for(j=0;j<n;j++)
       if(a[i][j]<min)min=a[i][j];
  return min;}


void main()
{
float a[100][20];
int m,n,q,i,j;
citire(a,&m,&n);
afisare(a,m,n);
printf("\nCel mai mic numar din matrice este %.3f",minim(a,m,n));
scanf("%d",&q);

}