#include <math.h>
#include "Header.h"
double a;
int m = -1;

int findFirstElement(double eps)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}
		++i;
	}
	return(m);
}