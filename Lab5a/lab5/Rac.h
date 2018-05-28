#pragma once
class Rac
{
	friend Rac sokr(Rac x);
public:
	int GetX();
	int GetY();
	Rac();
	Rac(int, int);
	Rac(int);
	Rac(double);
	Rac operator* (Rac);
	Rac operator* (double);
	Rac operator+ (Rac);
	Rac operator- (Rac);
	Rac operator/ (Rac);
private:
	int x;
	int y;
	void sokr(int&, int&);
};
