#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void citire(float v[], int* n)
{
	int i, er, p;
	printf("\nn="); scanf("%d", n);
	for (i = 0; i<*n; i++)
	{
		printf("v(%d)=", i);
		do { p = scanf("%f", &v[i]); } while (p != 1);
	}
}


void compactare(float v[], int n, float v1[], int *n1)
{
	int i, j, k;
	*n1 = 0;
	for (i = 0; i<n; i++)
	{
		k = 0;
		for (j = 0; j<*n1; j++)
			if (v[i] == v1[j]) k = 1;
		if (!k)
		{
			v1[*n1] = v[i];
			(*n1)++;
		}
	}
}

void afisare(float v[], int n)
{
	int i;
	printf("\n"); for (i = 0; i<n; i++) printf("\t%5.2f", v[i]);
}

void main()
{
	int n, n1, y, i, nrpoz;
	float v[50], v1[50], min;
	printf("Introduceti elementele vectorului: ");
	citire(v, &n);
	printf("Vectorul initial este:\n ");
	afisare(v, n);
	compactare(v, n,v1,&n1);
	printf("\n\nVectorul rezultat in urma prelucrarii este:\n ");
	afisare(v1, n1);
	printf("\n\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &y);
}