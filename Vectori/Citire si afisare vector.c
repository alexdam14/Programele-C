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

void afisare(float v[], int n)
{
	int i;
	printf("\n"); for (i = 0; i<n; i++) printf("\t%5.2f", v[i]);
}


void main()
{
	int n, i, y;
	float v[50];

	printf("Introduceti elementele vectorului: ");
	citire(v, &n);
	afisare(v, n);
	printf("\n\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &y);
}