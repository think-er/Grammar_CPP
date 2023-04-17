#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() : Circle(1) { }
	Circle(int r) : radius(r) { }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle& c) {
	cout << "���� ������ �������� �Է��ϼ���>>";
	int radius;
	cin >> radius;
	c.setRadius(radius);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut�� ���� = " << donut.getArea() << endl;
}