//// 초기화 값 세팅하려고
//// 일반 멤버 함수랑 구분하려고 클래스 이름이랑 동일하게 만듬
//#include <iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "반지름 " << radius << " 원 생성 " << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	double area = donut.getArea();
//	cout << "donut 면적은 " << area << endl;
//
//	Circle pizza(30);
//	area = pizza.getArea();
//	cout << "pizza 면적은 " << area << endl;
//}