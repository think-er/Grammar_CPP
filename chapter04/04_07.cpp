//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() : Circle(1) { }
//	Circle(int r) : radius(r) {
//		cout << "积己磊 角青 radius = " << radius << endl;
//	}
//	~Circle() {
//		cout << "家戈磊 角青 radius = " << radius << endl;
//	}
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() {
//	Circle* p, * q;
//	p = new Circle();
//	q = new Circle(30);
//	cout << p->getArea() << endl << q->getArea() << endl;
//	delete p;
//	delete q;
//}