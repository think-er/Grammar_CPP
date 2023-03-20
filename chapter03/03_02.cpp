//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	double width;
//	double height;
//	double getArea();
//};
//
///* 
//public 상속: Rectangle의 public 멤버들은 Trapezoid에서 public으로 사용 가능합니다. 즉, Trapezoid에서 Rectangle의 public 멤버에 직접 접근할 수 있습니다.
//private 상속: Rectangle의 모든 멤버들은 Trapezoid 내부에서는 private으로 사용 가능하지만, 외부에서는 접근이 불가능합니다.
//default 상속은 private 상속이다.
//*/
//class Trapezoid : public Rectangle {
//public :
//	double upper_side;
//	double getArea();
//};
//
//
//double Trapezoid::getArea() {
//	return (upper_side + width) * height / 2.0;
//}
//
//double Rectangle::getArea() {
//	return width * height;
//}
//
//int main() {
//	Rectangle rect;
//	rect.width = 3;
//	rect.height = 5;
//	cout << "사각형의 면적은 " << rect.getArea() << endl;
//
//	Trapezoid trape;
//	trape.width = 3;
//	trape.height = 5;
//	trape.upper_side = 4;
//	cout << "사다리꼴의 면적은 " << trape.getArea() << endl;
//}