#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void citire2(float a[][20],int *m,int *n)
{ int i,j;
  printf("Numar de linii matrice=");scanf("%d",&*m);
  printf("Numar de coloane matrice=");scanf("%d",&*n);
  for(i=0;i<*m;i++)
    for(j=0;j<*n;j++)
    {printf("a(%d,%d)=",i,j);
  scanf("%f",&a[i][j]);}
  }
void citire1(float a[],int *m)
{ int i;
  printf("Numarul de elemente ale vectorului=");scanf("%d",&*m);
   for(i=0;i<*m;i++)
    {printf("b(%d)=",i);
  scanf("%f",&a[i]);}
  }


int produs(float a[],int m,float b[][20],int n,int p,float c[],
           int *r)
{ int er,i,j,k;
  if(m!=n)er=1;
  else{er=0;
       *r=p;
       for(i=0;i<*r;i++)
        {c[i]=0;
         for(k=0;k<n;k++)
         c[i]+=a[k]*b[k][i];}
        }
  return er;}




void afisare(float a[20],int m)
{ int i;
  printf("\n");
  for(i=0;i<m;i++)
  {  printf("\t%4.2f",a[i]);}
    printf("\n");
}

void main()
{
float a[20],b[100][20],c[20];
int m,n,p,r,h,prod,i,j;
citire1(a,&m);
printf("\n \n");
citire2(b,&n,&p);
printf("\n \n");
prod=produs(a,m,b,n,p,c,&r);
if(prod==1){printf("Nu se poate realiza inmultirea!");}
else
{printf("Rezultatul obtinut este \n\n");
afisare(c,r);}

printf("\n\nPentru a parasi programul apasati o cifra, apoi enter\n\n");
scanf("%d",&h);
}