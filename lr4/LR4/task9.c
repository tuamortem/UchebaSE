#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Header.h"

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int g, x;
	const int n = 10;
	int arr[10];

	while (g = -1)
	{
		printf("������� 2 - 1\n");
		printf("������� 3 - 2\n");
		printf("������� 7 - 3\n");
		printf("������� 8 - 4\n");
		printf("����� - 5\n");
		printf("�������� �������\n");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
		{
			printf("����� � �����\n");
			incrementStackVariable();
			break;
		}
		case 2:
		{
			printf("����� � ������������ ������\n");
			incrementHeapVariable();
			break;
		}
		case 3:
		{
			printf("������ �� n-��������� � �����\n");
			sortStackArray(arr, n);
			break;
		}
		case 4:
			printf("������ �� n-��������� � ������������ ������\n");
			sortHeapArray(arr, n);
			break;
		case 5:
			return(0);
		default:
			printf("������������ ����\n");
			break;
		}
		getchar();
		getchar();
	}
	return(0);
}