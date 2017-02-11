#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void citire1(float a[][20],int *m,int *n)
{ int i,j;
  printf("Numar de linii matrice=");scanf("%d",&*m);
  printf("Numar de coloane matrice=");scanf("%d",&*n);
  for(i=0;i<*m;i++)
    for(j=0;j<*n;j++)
    {printf("a(%d,%d)=",i,j);
  scanf("%f",&a[i][j]);}
  }
void citire2(float a[],int *m)
{ int i;
  printf("Numarul de elemente ale vectorului=");scanf("%d",&*m);
   for(i=0;i<*m;i++)
    {printf("b(%d)=",i);
  scanf("%f",&a[i]);}
  }


int produs(float a[][20],int m,int n,float b[],int p,float c[], int *r)
{ int er,i,j,k;
  if(n!=p)er=1;
  else{er=0;
       *r=m;
       for(i=0;i<*r;i++)
         {c[i]=0;
          for(k=0;k<n;k++)
            c[i]+=a[i][k]*b[k];}
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
float a[100][20],b[20],c[20];
int m,n,p,r,h,prod,i,j;
citire1(a,&m,&n);
printf("\n \n");
citire2(b,&p);
printf("\n \n");
prod=produs(a,m,n,b,p,c,&r);
if(prod==1){printf("Nu se poate realiza inmultirea");}
else
{ printf("Rezultatul este: \n");
afisare(c,r);
}
printf("\n\nPentru a parasi programul apasati o cifra, apoi enter \n\n");
scanf("%d",&h);
}