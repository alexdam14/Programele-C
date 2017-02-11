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

void cresc(float a[][20],int m,int n,int b[],int *p)
{ int i,j,k;
  *p=0;
  for(i=0;i<m;i++)
   {k=1;
    for(j=0;j<n-1;j++)
      if(a[i][j]>=a[i][j+1])k=0;
    if(k)b[(*p)++]=i;
  }
}



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
int m,n,q,p,i,b[100];
citire(a,&m,&n);
afisare(a,m,n);
cresc(a,m,n,b,&p);
printf("\n\nNumarul de linii care au elementele in ordine strict crescatoare este : %d",p);
printf("\n\nAceste linii sunt :\n\n");
for(i=0;i<p;i++)
	printf("linia %d\n",b[i]);
scanf("%d",&q);

}