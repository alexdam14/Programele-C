#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float abs1(float x)
{
	if (x > 0)
	{
		return x;
	}
	else
	{
		return -x;
	}
}

void citire(float a[][20], int *n)
{
	int i, j;
	printf("Introduceti numarul de ecuatii/necunoscute ale sistemului: "); scanf("%d", &*n);
	for (i = 0; i<*n; i++)
		for (j = 0; j<*n; j++)
		{
		printf("a(%d,%d)=", i, j);
		scanf("%f", &a[i][j]);
		}
}

void citirev(float a[], int m)
{
	int i;
	for (i = 0; i<m; i++)
	{
		printf("Termenul liber %d=", i);
		scanf("%f", &a[i]);
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

float inversa(float a[][20], int n, float b[], float eps,
	float inv[][20], float x[])
{
	float c[20][20], e[20][20], d, aux;
	int i, j, k, p;
	d = 1;                          //construire matrice de lucru
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			c[i][j] = a[i][j]; c[i][j + n] = (i == j);
		}
		c[i][2 * n] = b[i];
	}
	
	i = 0;
	while ((i<n) && d)														//pivotare si calcul determinant
	{
		p = i;																//cautare pivot pe coloana i
		for (j = i + 1; j<n; j++)
			if (abs1(c[j][i])>abs1(c[p][i]))p = j;
		if (abs1(c[p][i])<eps)d = 0;											//aducere pivot in pozitie
		else{
			if (p != i){ aux = c[p][i]; c[p][i] = c[i][i]; c[i][i] = aux; d = -d; }
			d = d*c[i][i];
			for (j = 0; j<n; j++) e[j][i] = 0;								//pivotare
			for (j = i; j<2 * n + 1; j++) e[i][j] = c[i][j] / c[i][i];
			for (j = 0; j<n; j++)
				for (k = i; k<2 * n + 1; k++)
					if (j != i)e[j][k] = (c[j][k] * c[p][i] - c[j][i] * c[i][k]) / c[p][i];
			for (k = 0; k<n; k++)
				for (j = i; j<2 * n + 1; j++)
					c[k][j] = e[k][j];
		}
		i++;
	}
	for (i = 0; i<n; i++)											     //separare rezultate
	{
		for (j = 0; j<n; j++)
			inv[i][j] = c[i][j + n];
		x[i] = c[i][2 * n];
	}
	return d;
}


void main()
{
	float a[20][20], b[20], x[20], inv[20][20], eps = 0;
	int m, n, q, i, j, t;
	citire(a, &n);
	citirev(b, n);
	t = inversa(a, n, b, eps, inv, x);
	if (t == 0)
	{
		printf("\n\nMatricea nu este inversabila!\n\n");
	}
	else
	{
		printf("\n\n");
		for (i = 0; i < n; i++)
		{
			printf("Necunoscuta %d = %.2f\n", i + 1, x[i]);
		}
	}
	printf("\n\nPentru a iesi din program, apasati o cifra, apoi ENTER: "); scanf("%d", &q);

}