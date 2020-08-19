#include "Circle.h"

void Circle::GetArea() const {
	cout << "S: " << p * (radius*radius) << endl;
}
void Circle::GetPerimeter() const {
	cout << "Perimeter: " << 2 * (p*radius) << endl;
}
void Circle::Print() const {
	cout << endl;
	cout << "radius: " << radius << endl;
	cout << "diameter: " << diameter << endl;
	cout << "p: " << p << endl;
	cout << endl;
}
