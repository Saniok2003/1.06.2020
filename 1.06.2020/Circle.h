#pragma once
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	int diameter;
	double p;
public:
	Circle() {
		p = 3.14;
		radius = 0;
		diameter = radius * 2;
		//perimeter = 2*(p*radius);
		//S = p * (radius*radius);
	}
	Circle(int _radius) {
		p = 3.14;
		radius = _radius;
		diameter = radius * 2;
		//perimeter = 2 * (p*radius);
		//S = p * (radius*radius);
	}
	Circle(int _diameter, double p) {
		p = 3.14;
		radius = _diameter / 2;
		diameter = _diameter;
		//perimeter = 2 * (p*radius);
		//S = p * (radius*radius);
	}
	void GetArea() const;
	void GetPerimeter() const;
	void Print() const;
};

