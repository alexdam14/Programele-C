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

int minim(float a[][20],int m,int n,float *m1,float *m2)
{ int i,er;
  if(m!=n)er=1;
  else{*m1=a[0][0];*m2=a[0][m-1];
       for(i=0;i<m;i++)
        {if(a[i][i]<*m1)*m1=a[i][i];
         if(a[i][m-i-1]<*m2)*m2=a[i][m-i-1];}
       er=0;}
  return er;}


void main()
{
float a[100][20],m1,m2;
int m,n,q,i,j,t;
citire(a,&m,&n);
if(m!=n){printf("\nMatricea nu este patratica");}
else
{
t=minim(a,m,n,&m1,&m2);
if(t==0)
{
printf("\nMinimul de pe diagonala principala este %.3f",m1);
printf("\nMinimul de pe diagonala secundara este %.3f",m2);
}}
scanf("%d",&q);
}