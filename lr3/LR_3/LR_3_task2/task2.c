#include <math.h>
#include <stdio.h>

double summ2(double eps)
{
	double a = 1.0 + eps;
	double value = 0.0;
	for (int i = 0; fabs(a) > 0; ++i)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		value = value + a;
	}
	return(value);
}