#include <stdio.h>
#include <math.h>

void incrementStackVariable()
{
	int g;
	printf("������� 2\n");
	printf("������� ����� = ");
	scanf_s("%d", &g);
	printf("����� = %p, ��������  = %d\n", &g, g);
	increment(&g);
	printf("����� = %p, �������� = %d\n", &g, g);
}
