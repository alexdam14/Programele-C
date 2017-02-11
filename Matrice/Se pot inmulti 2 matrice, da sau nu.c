#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void citire1(float a[][20],int *m,int *n)
{ 
  printf("Numar de linii matricea A=");scanf("%d",&*m);
  printf("Numar de coloane matricea A=");scanf("%d",&*n);
   }
void citire2(float a[][20],int *m,int *n)
{ 
  printf("Numar de linii matricea B=");scanf("%d",&*m);
  printf("Numar de coloane matricea B=");scanf("%d",&*n);
   }

int produs(float a[][20],int m,int n,float b[][20],int p,int q, 
           float c[][20],int *r,int *s)
{ int er,i,j,k;
  if(n!=p)er=1;
  else{er=0;
       *r=m;*s=q;
       for(i=0;i<*r;i++)
       for(j=0;j<*s;j++)
        {c[i][j]=0;
         for(k=0;k<n;k++)
           c[i][j]=a[i][k]*b[k][j];}
        }
 return er;}


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
float a[100][20],b[100][20],c[100][20];
int m,n,p,q,r,s,h,prod,i,j;
citire1(a,&m,&n);
printf("\n \n");
citire2(b,&p,&q);
printf("\n \n");
prod=produs(a,m,n,b,p,q,c,&r,&s);
if(prod==1){printf("\nMatricele nu se pot inmulti");}
else
{
printf("\nNumarul de linii al matricei rezultat este %d, si numarul coloanelor este %d",r,s);
}
scanf("%d",&h);

}