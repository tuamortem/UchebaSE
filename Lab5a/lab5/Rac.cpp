#include "laba5.h"
#include "Rac.h"

Rac::Rac(int a, int b)//����������� �������������
{
	x = a;
	y = b;
	sokr(x, y);
}
Rac::Rac(int a)
{
	x = a;
	y = a;
}
Rac::Rac()//����������� �� ���������
{
	x = 1;
	y = 1;
}
int Rac::GetX()
{
	return x;
}
int Rac::GetY()
{
	return y;
}
Rac Rac::operator* (Rac p)//��������� ������
{
	int a, b;
	a = x * p.GetX();
	b = y * p.GetY();
	Rac op(a, b);
	return op;
}
Rac Rac::operator*(double p)//��������� ������ � ���� �����
{
	x = x*p;
	Rac op(x, y);
	return op;
}
Rac Rac::operator+(Rac p)//�������� ������
{
	int a, b = 0;
	a = p.GetX()*y + x*p.GetY();
	b = y*p.GetY();
	Rac op(a, b);
	return op;
};
Rac Rac::operator-(Rac p)//��������� ������
{
	int a = x*p.GetY() - p.GetX()*y;
	int b = y*p.GetY();
	Rac op(a, b);
	return op;
}
Rac Rac::operator/(Rac p)
{
	int a = x*p.GetY();
	int b = y*p.GetX();
	Rac op(a, b);
	return op;
}
void Rac::sokr(int &x, int&y)//��������� ������
{
	int a = abs(x);
	int b = abs(y);
	int NOD = 0;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a%b;
		}
		else
		{
			b = b%a;
		}
	}
	NOD = b + a;
	x = x / NOD;
	y = y / NOD;
}
