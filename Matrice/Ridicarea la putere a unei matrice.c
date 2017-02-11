#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void citire(float a[][20], int *m)
{
	int i, j;
	printf("Introduceti numarul de linii/coloane: "); scanf("%d", &*m);	
	for (i = 0; i<*m; i++)
		for (j = 0; j<*m; j++)
		{
		printf("a(%d,%d)=", i, j);
		scanf("%f", &a[i][j]);
		}
}

void copiere(float a[][20], int m, float b[][20])
{
	int i, j;
	for (i = 0; i<m; i++)
		for (j = 0; j<m; j++)
			b[i][j] = a[i][j];
}


int produs(float a[][20], int m, int n, float b[][20], int p, int q,
	float c[][20], int *r, int *s)
{
	int er, i, j, k;
	if (n != p)er = 1;
	else{
		er = 0;
		*r = m; *s = q;
		for (i = 0; i<*r; i++)
			for (j = 0; j<*s; j++)
			{
			c[i][j] = 0;
			for (k = 0; k<n; k++)
				c[i][j] += a[i][k] * b[k][j];
			}
	}
	return er;
}


void putere(float a[][20], int m, int p, float b[][20])
{
	int i, j, k;
	float c[20][20];
	for (i = 0; i<m; i++)
		for (j = 0; j<m; j++)
			c[i][j] = (i == j);
	for (i = 0; i<p; i++)
	{
		produs(c, m, m, a, m, m, b, &m, &m);
		copiere(b, m, c);
	}
}


void afisare(float a[][20], int m, int n)
{
	int i, j;
	printf("\n");
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
			printf("\t%4.2f", a[i][j]);
		printf("\n");
	}
}

void main()
{
	float a[100][20], b[100][20];
	int m, w, i, j, p;
	citire(a, &m);
	printf("\n\nMatricea introdusa este:\n\n ");
	afisare(a, m, m);
	printf("\n\nIntroduceti puterea la care doriti sa ridicati matricea: "); scanf("%d", &p);
	putere(a, m, p, b);
	printf("\n\nMatricea rezultat este: \n\n");
	afisare(b, m, m);
	printf("\n\nPentru a iesi din program apasati o cifra, apoi tasta ENTER: "); scanf("%d", &w);

}