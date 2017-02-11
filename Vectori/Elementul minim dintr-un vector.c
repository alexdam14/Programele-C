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

float minim(float v[], int n)
{
	float m; int i;
	m = v[0];
	for (i = 0; i<n; i++)
		if (m>v[i])m = v[i];
	return(m);
}

void main()
{
	int n, i, y;
	float v[50],min;
	printf("Introduceti elementele vectorului: ");
	citire(v, &n);
	printf("Vectorul introdus este:\n ");
	afisare(v, n);
	min = minim(v, n);
	printf("\n\nElementul minim din vector este %.2f", min);
	printf("\n\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &y);
}