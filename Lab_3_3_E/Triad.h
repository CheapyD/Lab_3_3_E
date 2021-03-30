#pragma once
#pragma pack(1)
#include "Object.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Triad : public Object
{
private:
	double a, b, c;

public:
	double GetA() const { return a; }
	double GetB() const { return b; }
	double GetC() const { return c; }

	void SetA(double value) { a = value; }
	void SetB(double value) { b = value; }
	void SetC(double value) { c = value; }

	Triad();
	Triad(const double a, const double b, const double c);
	Triad(const Triad& s);

	Triad& operator = (const Triad& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Triad& s);
	friend istream& operator >> (istream& in, Triad& s);
};