//#include <iostream>
//using namespace std;
//
//
//namespace Circle {
//	class Circle {
//	// default 접근 지정자 : private
//	public:
//		int radius;
//		// 굳이 변수를 중복해서 main() 함수에서 사용하지 않기 위해서 area 멤버 변수 선언
//		double area;
//		double getArea();
//	};
//}
//
//double Circle::Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle::Circle donut;
//	donut.radius = 1;
//	donut.area = donut.getArea();
//	cout << "donut 면적은 " << donut.area << endl;
//
//	Circle::Circle pizza;
//	pizza.radius = 30;
//	pizza.area = pizza.getArea();
//	cout << "pizza 면적은 " << pizza.area << endl;
//}