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
//public ���: Rectangle�� public ������� Trapezoid���� public���� ��� �����մϴ�. ��, Trapezoid���� Rectangle�� public ����� ���� ������ �� �ֽ��ϴ�.
//private ���: Rectangle�� ��� ������� Trapezoid ���ο����� private���� ��� ����������, �ܺο����� ������ �Ұ����մϴ�.
//default ����� private ����̴�.
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
//	cout << "�簢���� ������ " << rect.getArea() << endl;
//
//	Trapezoid trape;
//	trape.width = 3;
//	trape.height = 5;
//	trape.upper_side = 4;
//	cout << "��ٸ����� ������ " << trape.getArea() << endl;
//}