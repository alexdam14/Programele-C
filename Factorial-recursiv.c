#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
	int rez = 1;
	if (n == 0){ return 1; }
	return (n*factorial(n - 1));
}

void main()
{
	int n, m, re;
	printf("Introduceti n: "); scanf("%d", &n);
	re = factorial(n);
	printf("%d", re);
	scanf("%d", &m);

}