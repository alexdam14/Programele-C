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


void main()
{
float a[100][20];
int m,n;
citire(a,&m,&n);
}


