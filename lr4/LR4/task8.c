#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void sortHeapArray(int *arr, int n)
{
	n = 0;
	printf("¬ведите размер массива: ");
	scanf_s("%d", &n);
	*arr = (int *)malloc(sizeof(int)*n);
	writeArray(arr, n);
	readArray(arr, n);
	sort(arr, n);
	readArray(arr, n);
	free(arr);
}