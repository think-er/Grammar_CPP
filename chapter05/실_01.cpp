#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
};

void swap(Circle& c1, Circle& c2) {
	cout << "\n<swap �Լ� ȣ�� ��>\n";
	Circle temp = c1;
	c1 = c2;
	c2 = temp;
}

int main() {
	Circle c1(5);
	Circle c2(10);
	cout << "c1�� ������ = " << c1.getRadius() << " ���� = " << c1.getArea() << "\n";
	cout << "c2�� ������ = " << c2.getRadius() << " ���� = " << c2.getArea() << "\n";

	swap(c1, c2);
	cout << "c1�� ������ = " << c1.getRadius() << " ���� = " << c1.getArea() << "\n";
	cout << "c2�� ������ = " << c2.getRadius() << " ���� = " << c2.getArea() << "\n";
	
}