#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
double func(double x);

int main(void)
{
	double x, a;
	x = 3.14/2;
	a = func(x);
	printf("x=3.14/2 Answer = %.4lf\n", a);
	printf("Enter x=");
	scanf("%lf", &x);
	a = func(x);

	printf("Answer = %.4lf", a);
	getchar();
	getchar();
	return(0);
}
