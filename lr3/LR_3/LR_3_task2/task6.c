#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include "Header.h"
int main(void)
{
	setlocale(LC_ALL, "RUS");
	int numOfTask;
	for (int i = 0; i != -1;)
	{
		system("cls");
		printf("������� 1\n");
		printf("������� 2\n");
		printf("������� 3\n");
		printf("������� 4\n");
		printf("������� 5\n");
		printf("����� - 6\n\n ");
		int n = 0, k = 0;
		double eps = 0.0;
		printf("������� ����� �������: ");
		scanf_s("%d", &numOfTask);
		switch (numOfTask)
		{
		case 1:
			system("cls");
			printf("������� 1\n");
			printf("������� ����� ��������� n:");
			scanf_s("%d", &n);
			printf("����� = %f\n\n", summ(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("������� 2\n");
			printf("������� �������� eps =");
			scanf_s("%lf", &eps);
			printf("Sum is=%f\n\n", summ2(eps));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("������� 3 \n");
			printf("������� n= ");
			scanf_s("%d", &n);
			printf("������� k= ");
			scanf_s("%d", &k);
			printf("������������������ = ");
			print(n, k);
			system("pause");

		case 4:
			system("cls");
			printf("������� 4 \n");
			printf("������� eps = ");
			scanf_s("%lf", &eps);
			printf("����� = %d\n\n", findFirstElement(eps));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("������� 5\n");
			printf("������� eps = ");
			scanf_s("%lf", &eps);
			printf("����� = %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		case 6:
			i = -1;
			break;

		default:
			printf("������������ ���� \n");
			system("pause");
		}
	}
	system("pause");
	return (0);
}