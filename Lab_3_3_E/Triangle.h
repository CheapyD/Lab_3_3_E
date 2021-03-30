#pragma once
#include "Triad.h"

class Triangle : public Triad
{
public:
	Triangle();
	Triangle(const double a, const double b, const double c);
	Triangle(const Triangle& v);

	Triangle& operator ++ ();
	Triangle& operator -- ();
	Triangle operator ++ (int);
	Triangle operator -- (int);

	double Sum();
	double Square() const;
	void Angle(double& A, double& B, double& C) const;
};