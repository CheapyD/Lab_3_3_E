#include "Triad.h"

Triad::Triad()
	: a(0), b(0), c(0)
{}

Triad::Triad(const double A, const double B, const double C)
	: a(A), b(B), c(C)
{}

Triad::Triad(const Triad& v)
	: a(v.a), b(v.b), c(v.c)
{}

Triad& Triad::operator = (const Triad& n)
{
	a = n.a;
	b = n.b;
	c = n.c;
	return *this;
}

Triad::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;
	ss << "c = " << c << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Triad& s)
{
	return out << string(s);
}

istream& operator >>(istream& in, Triad& s)
{
	double a, b, c;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	cout << "c = "; in >> c;
	s.SetA(a); s.SetB(b); s.SetC(c);
	return in;
}