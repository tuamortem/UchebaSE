#include "laba5.h"

double f1(Rac x)//������� ����������� ���������� � ���� ��������������� �����
{
	double z = double(x.GetX()) / double(x.GetY());//������ ���������� �������� �����
	return 2 * z + 1.3 / z;
}

Rac f2(Rac x)//������� ����������� ���������� � ���� "������������ �����"
{
	Rac y1(2, 1);
	Rac y2(13, 10);
	Rac result = y1*x + y2*x;//������ ���������
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b = 0;
	double z = 0;
	printf("vvod a = ");//���������
	scanf_s("%d", &a);
	printf("vvod b = ");//�����������
	scanf_s("%d", &b);
	Rac x(a, b);//������������ �����
	z = f1(x);
	x = f2(x);
	printf("Result 1\n");
	printf("y = %lf \n", z);
	printf("Result 2\n");
	printf("y = %d/%d\n", x.GetX(), x.GetY());
	system("pause");
	return 0;
}
