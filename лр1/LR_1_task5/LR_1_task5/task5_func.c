#include <stdio.h>
#include <math.h>
double func(double x)
{
	double y;
	y = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	return(y);
}