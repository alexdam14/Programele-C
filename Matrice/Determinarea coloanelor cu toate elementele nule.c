#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void citire(float a[][20], int *m, int *n)
{
	int i, j;
	printf("Introduceti numarul de linii: "); scanf("%d", &*m);
	printf("Introduceti numarul de coloane: "); scanf("%d", &*n);
	for (i = 0; i<*m; i++)
		for (j = 0; j<*n; j++)
		{
		printf("a(%d,%d)=", i, j);
		scanf("%f", &a[i][j]);
		}
}

void nule(float a[][20], int m, int n, int b[], int *p)
{
	int i, j, k;
	*p = 0;
	for (i = 0; i<n; i++)
	{
		k = 1;
		for (j = 0; j<m; j++)
			if (a[j][i])k = 0;
		if (k)b[(*p)++] = i;
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
	float a[100][20];
	int b[100], m, n, q, i, j, p;
	citire(a, &m, &n);
	printf("\n\nMatricea este urmatoarea: \n\n");
	afisare(a, m, n);
	nule(a, m, n, b, &p);
	if (p == 0)
	{
		printf("\n\nNu exista coloane cu elemente nule");
	}
	else
		if (p==1)
	{
		printf("\n\nColoanele cu toate elementele nule sunt:\n\n");
		for (i = 0; i < p; i++)
		{
			printf("Coloana %d \n", b[i]+1);
		}
		printf("\n\nIn total, este %d coloana care are toate elementele nule ", p);
	}
		else
		{
			printf("\n\nColoanele cu toate elementele nule sunt:\n\n");
			for (i = 0; i < p; i++)
			{
				printf("Coloana %d \n", b[i]+1);
			}
			printf("\n\nIn total, sunt %d coloane care au toate elementele nule ", p);
		}
	printf("\n\nPentru a iesi din program, apasati o cifra, apoi ENTER: ");
	scanf("%d", &q);

}