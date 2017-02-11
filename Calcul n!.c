#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

long fact(long n)
{
	long i, f = 1;
	for (i = 1; i <= n; i++)
		f=f*i;
	return f;
}

void main()
{
	long n, x;
	int y;
	printf("Introduceti n: "); scanf("%ld", &n);
	x = fact(n);
	printf("\n%ld!=%ld", n, x);
	printf("\n\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &y);

}