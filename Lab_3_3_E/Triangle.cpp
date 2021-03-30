#include "Triangle.h"

Triangle::Triangle()
	: Triad()
{}

Triangle::Triangle(const double A, const double B, const double C)
{
	if (A + B > C && B + C > A && A + C > B)
	{
		SetA(A); SetB(B); SetC(C);
	}
	else
	{
		SetA(0); SetB(0); SetC(0);
	}
}

Triangle::Triangle(const Triangle& v)
	: Triad(v)
{}

Triangle& Triangle::operator --()
{
	this->SetA(this->GetA() - 1);
	return *this;
}

Triangle& Triangle::operator ++()
{
	this->SetA(this->GetA() + 1);
	return *this;
}

Triangle Triangle::operator --(int)
{
	Triangle a(*this);
	this->SetA(this->GetA() - 1);
	return a;
}

Triangle Triangle::operator ++(int)
{
	Triangle a(*this);
	this->SetA(this->GetA() + 1);
	return a;
}

double Triangle::Sum()
{
	return GetA() + GetB() + GetC();
}

double Triangle::Square() const
{
	double a = GetA();
	double b = GetB();
	double c = GetC();
	double S = 0;

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "Square of triangle doesn't exists" << endl;
	}
	else
	{
		double p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
	}
	return S;
}

void Triangle::Angle(double& A, double& B, double& C) const
{
	const double PI = atan(1) * 4;
	double a = GetA();
	double b = GetB();
	double c = GetC();

	double S = Square();

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "Triangle doesn't exists" << endl;
	}
	else
	{
		double sinA = (S * 2) / (a * b);
		double x1 = asin(sinA);
		A = (x1 * 180) / PI;

		double sinB = (sinA * b) / c;
		double x2 = asin(sinB);
		B = (x2 * 180) / PI;

		C = 180 - (A + B);
	}
}