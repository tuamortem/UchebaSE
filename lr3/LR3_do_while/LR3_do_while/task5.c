#include <math.h>
#include "Header.h"

double a;
int findFirstNegativeElement(double eps)
{
	int i = 0;
	do
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	} while (i > -1);
}