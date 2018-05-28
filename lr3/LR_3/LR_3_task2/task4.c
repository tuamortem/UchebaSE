#include <math.h>

double a;
int m = -1;

int findFirstElement(double eps)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}

	}
	return(m);
}