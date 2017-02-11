#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

long cmmdc(long a, long b)
{
	long c;
	if (a == b) c = a;
	else if (a>b) c = cmmdc(a - b, b);
	else c = cmmdc(a, b - a);
	return c;
}

void main()
{
	long a, b, c, ex;
	printf("Introduceti cele 2 numere:");
	printf("\na="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	c = cmmdc(a, b);
	printf("\nCel mai mare divizor comun al celor 2 numere introduse este: %ld \n", c);
	printf("\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &ex);

}