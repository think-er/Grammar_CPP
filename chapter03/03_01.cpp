//#include <iostream>
//using namespace std;
//
//
//namespace Circle {
//	class Circle {
//	// default ���� ������ : private
//	public:
//		int radius;
//		// ���� ������ �ߺ��ؼ� main() �Լ����� ������� �ʱ� ���ؼ� area ��� ���� ����
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
//	cout << "donut ������ " << donut.area << endl;
//
//	Circle::Circle pizza;
//	pizza.radius = 30;
//	pizza.area = pizza.getArea();
//	cout << "pizza ������ " << pizza.area << endl;
//}