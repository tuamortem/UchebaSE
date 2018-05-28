#include <math.h>
#include "Header.h"
double a;

int findFirstElement(double eps)
{
	int m = -1;
	int i = 0;
	do
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}
		++i;
	} while (i > -1);
	return(m);
}