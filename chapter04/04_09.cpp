//#include <iostream>
//using namespace std;
//
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
//	// pArray�� �����޸� �Ҵ��� �迭��ó�� ����
//	Circle* pArray = new Circle[3]{ 10, 20, 30 };
//
//	for (int i = 0; i < 3; i++) {
//		cout << pArray[i].getArea() << endl;
//	}
//
//	Circle* p = pArray;
//	for (int i = 0; i < 3; i++) {
//		cout << p->getArea() << endl;
//		p++;
//	}
//
//	delete[] pArray;
//}
