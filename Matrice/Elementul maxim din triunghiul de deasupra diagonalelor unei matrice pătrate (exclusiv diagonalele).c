#include<stdio.h>
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


float maxim1(float a[][20],int m)
{ int i,j;
float max;
  max=a[0][1];
  for(i=0;i<(m-1)/2;i++)
    for(j=i+1;j<m-i-1;j++)
     if(a[i][j]>max)max=a[i][j];
  return max;}

void main()
{
float a[100][20];
int m,n,q,i,j;
citire(a,&m,&n);
afisare(a,m,n);
if(n<3 && m<3)
	printf("\nMatricea are prea putine linii/coloane");
else printf("\nMaximul este %.3f",maxim1(a,m));
scanf("%d",&q);

}