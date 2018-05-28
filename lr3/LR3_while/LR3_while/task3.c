#include <math.h>
#include <stdio.h>
#include "Header.h"
double a;
void print(int n, int k)
{
	int i = 0;
	while (i < n)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		++i;
		printf("%.2lf\n", a);
	}
}