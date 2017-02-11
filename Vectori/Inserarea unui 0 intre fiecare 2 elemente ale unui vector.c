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


void inserare(float v[], int* n)
{
	int i, j, k;
	k = *n;
	for (i = 0; i<k - 1; i++)
	{
		for (j = *n; j>2 * i + 1; j--) v[j] = v[j - 1];
		v[2 * i + 1] = 0;
		(*n)++;
	}
}

void afisare(float v[], int n)
{
	int i;
	printf("\n"); for (i = 0; i<n; i++) printf("\t%5.2f", v[i]);
}

void main()
{
	int n, y, poz[50], i, nrpoz;
	float v[50], min;
	printf("Introduceti elementele vectorului: ");
	citire(v, &n);
	inserare(v, &n);
	printf("Vectorul rezultat in urma prelucrarii este:\n ");
	afisare(v, n);
	printf("\n\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &y);
}