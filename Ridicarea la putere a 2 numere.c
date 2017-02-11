#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

long putere(int b, int e)
{
	long p = 1;
	while (e)
		if (e % 2) { p *= b; e--; }
		else { b *= b; e /= 2; }
		return p;
}

void main()
{
	long p, b, e, exit;

	printf("Introduceti baza a: "); scanf("%d", &b);	
	printf("Introduceti exponentul b: "); scanf("%d", &e);
	p = putere(b, e);
	printf("\n%ld^%ld= %ld \n",b,e,p);
	printf("\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &exit);

}