#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

double a[100];
int gr;

double f(double x)
{
	int i;
	double s=0;
	for (i = gr; i >= 0; i--)
	{
		s += a[i] * pow(x, i);
	}
	return s;
}

double trapez(double a, double b, int n, double(*f)(double))
{
	double h, i;
	int j;
	h = (b - a) / n; i = 0.0;
	for (j = 0; j <= n; j++)
		i += (*f)(a + j*h);
	i *= h; return i;
}

void main()

{

int n, i, ex;
double c, d, val, f(double);

printf("Introduceti capetele intervalului pe care este definita integrala, c si d:");
printf("\na="); scanf("%lf", &c);
printf("b="); scanf("%lf", &d);
printf("\nIntroduceti numarul de diviziuni: "); scanf("%d", &n);
printf("Introduceti gradul functiei: "); scanf("%d", &gr);
for (i = gr; i >= 1; i--)
{
	printf("\nIntroduceti coeficientul de grad %d al functiei:", i); scanf("%lf", &a[i]);
}

	printf("\nIntroduceti termenul liber al functiei: "); scanf("%lf", &a[0]);

	val = trapez(c, d, n, &f);
	printf("%lf", val);

printf("\nPentru a iesi din program tastati o cifra apoi apasati ENTER: ");
scanf("%d", &ex);


}