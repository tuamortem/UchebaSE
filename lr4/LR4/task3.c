#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void incrementHeapVariable()
{
	printf("������� 3\n");

	int *d = (int *)malloc(sizeof(int));
	printf("������� ����� ");
	scanf_s("%d", d);

	printf("����� = %p, �������� = %d \n", d, *d);
	increment(d);
	printf("����� = %p, �������� = %d \n", d, *d);
	free(d);
}
