//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() : Circle(1) { }
//	Circle(int r) : radius(r) {
//		cout << "생성자 실행 radius = " << radius << endl;
//	}
//	~Circle() {
//		cout << "소멸자 실행 radius = " << radius << endl;
//	}
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() {
//	// pArray를 정적메모리 할당의 배열명처럼 생각
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
