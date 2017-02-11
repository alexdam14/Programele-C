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

float minim(float v[], int n, int *poz)
{
	float m;
	m = v[0];
	*poz = 0;
	int i;
	for (i = 0; i<n; i++)
		if (m>v[i]){
		m = v[i];
		*poz = i;
		}
		return(m);
		}

	void main()
	{
		int n, y, poz;
		float v[50], min;
		printf("Introduceti elementele vectorului: ");
		citire(v, &n);
		printf("Vectorul introdus este:\n ");
		afisare(v, n);
		min = minim(v, n, &poz);
		printf("\n\nElementul minim din vector este %.2f", min);
		printf("\nPrima pozitie pe care acesta apare este %d", poz+1);
		printf("\n\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &y);
	}