//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() : Circle(1) { }
//	Circle(int r) : radius(r) { }
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.4 * radius * radius; }
//	~Circle();
//};
//
//Circle::~Circle() {
//	cout << "Circle(" << radius << ") �Ҹ�!" << endl;
//}
//
//int main() {
//	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };
//
//	for (int i = 0; i < 3; i++)
//		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
//}