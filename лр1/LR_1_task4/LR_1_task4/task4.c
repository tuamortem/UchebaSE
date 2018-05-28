#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
double func();
double x, a;
int main(void)
{
	x = 3.14/2;
	func();
	printf("x=3.14/2 Answer = %.4lf\n", a);
	printf("Enter x=");
	scanf("%lf", &x);
	func();
	printf("Answer = %.4lf", a);
	getchar();
	getchar();

	return(0);
}
double func(void)
{

	a = cos(x)+ sin(x)+ cos(3*x)+ sin(3*x);
	return(0);
}
