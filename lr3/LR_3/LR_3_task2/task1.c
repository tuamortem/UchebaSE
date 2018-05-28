#include <math.h>
#include <stdio.h>

double summ(int n)
{
	double a, sum = 0.0;
	for (double i = 0; i <= n - 1; i++)
	{
		a = pow(-1, i)*((i+1) / (pow(i,3)+2));
		sum = sum + a;
	}
	return (sum);
}