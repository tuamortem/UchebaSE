#include <math.h>
#include <stdio.h>

void increment(int *n)
{
	if (*n != 0)
	{
		printf("������� 1\n");
		printf("����� =%p , �������� = %d\n", n, *n);
		++*n;
		printf("����� �������� = %d\n", *n);
	}
	else
		printf("��������� ������");
}