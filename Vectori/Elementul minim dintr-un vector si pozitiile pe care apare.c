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

float minim(float v[], int n, int poz[], int *nrpoz)
{
	float m;
	int i;
	m = v[0]; poz[0] = 0;
	*nrpoz = 1;
	for (i = 1; i<n; i++)
		if (m>v[i]) {
		m = v[i];
		poz[0] = i;
		*nrpoz = 1;
		}
		else if (m == v[i]) {
			poz[*nrpoz] = i;
			(*nrpoz)++;
		}
		return(m);
}

void main()
{
	int n, y, poz[50],i,nrpoz;
	float v[50], min;
	printf("Introduceti elementele vectorului: ");
	citire(v, &n);
	printf("Vectorul introdus este:\n ");
	afisare(v, n);
	min = minim(v, n, poz, &nrpoz);
	printf("\n\nElementul minim din vector este %.2f", min);
	printf("\n\nPozitiile pe care acesta apare sunt:\n");
	for (i = 0; i < nrpoz; i++)
	{
		printf("\nPozitia %d", poz[i]+1);
	}
	printf("\n\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &y);
}