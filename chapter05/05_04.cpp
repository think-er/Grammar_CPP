#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() : Circle(1) { }
	Circle(int r) : radius(r) { }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int radius) { this->radius = radius; }
};

int main() {
	Circle circle;
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();
}