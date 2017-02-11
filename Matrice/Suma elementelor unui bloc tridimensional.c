#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void citire(float a[][20][20], int *m, int *n, int *p)
{
	int i, j, k;
	printf("Dimensiunea 1 = "); scanf("%d", &*m);
	printf("Dimensiunea 2 = "); scanf("%d", &*n);
	printf("Dimensiunea 3 = "); scanf("%d", &*p);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++)
			for (k = 0; k < *p; k++)
			{
		printf("a(%d,%d,%d)=", i, j, k);
		scanf("%f", &a[i][j][k]);
			}
}

float suma(float a[][20][20], int m, int n, int p)
{
	int s = 0, i, j, k;
	for (i = 0; i<m; i++)
		for (j = 0; j<n; j++)
			for (k = 0; k<p; k++)
				s += a[i][j][k];
	return(s);
}

void main()
{
	float a[20][20][20], s;
	int m, n, p, exit;

	citire(a, &m, &n, &p);
	s = suma(a, m, n, p);
	printf("\nSuma elementelor masivului tridimensional este %.2f \n", s);


	printf("\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &exit);

}