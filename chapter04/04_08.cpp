//#include <iostream>
//using namespace std;
//
//// ������� ���Ƴ� ��������
//class Circle {
//	int radius;
//public:
//	Circle() : Circle(1) { }
//	Circle(int r) : radius(r) {
//		cout << "������ ���� radius = " << radius << endl;
//	}
//	~Circle() {
//		cout << "�Ҹ��� ���� radius = " << radius << endl;
//	}
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() {
//	int radius;
//	while (true) {
//		cout << "���� ������ �Է�(�����̸� ����)>> ";
//		cin >> radius;
//		if (radius < 0) break;
//		Circle* p = new Circle(radius);
//		cout << "���� ������ " << p->getArea() << endl;
//		delete p;
//	}
//}