#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

long fib(int n)
{
	long f;
	if ((n == 1) || (n == 2))f = 1;
	else f = fib(n - 1) + fib(n - 2);
	return(f);
}

void main()
{
	long x;
	int y,n;
	printf("Introduceti ordinul termenului pe care doriti sa il aflati: "); scanf("%ld", &n);
	x = fib(n);
	printf("\nTermenul este: %ld", x);
	printf("\n\nPentru a iesi din program tastati o cifra apoi apasati ENTER: "); scanf("%d", &y);

}