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
	cout << "\n<swap 함수 호출 후>\n";
	Circle temp = c1;
	c1 = c2;
	c2 = temp;
}

int main() {
	Circle c1(5);
	Circle c2(10);
	cout << "c1의 반지름 = " << c1.getRadius() << " 넓이 = " << c1.getArea() << "\n";
	cout << "c2의 반지름 = " << c2.getRadius() << " 넓이 = " << c2.getArea() << "\n";

	swap(c1, c2);
	cout << "c1의 반지름 = " << c1.getRadius() << " 넓이 = " << c1.getArea() << "\n";
	cout << "c2의 반지름 = " << c2.getRadius() << " 넓이 = " << c2.getArea() << "\n";
	
}