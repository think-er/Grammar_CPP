//#include <iostream>
//using namespace std;
//
//class Rectangle {
//	int width;
//	int height;
//public:
//	Rectangle();
//	Rectangle(int a);
//	Rectangle(int a, int b);
//	bool isSquare();
//};
//
//Rectangle::Rectangle() : width(1), height(1) { }
//Rectangle::Rectangle(int a) : width(a), height(a) { }
//Rectangle::Rectangle(int a, int b) : width(a), height(b) { }
//bool Rectangle::isSquare() {
//	if (height == width)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
//	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
//	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
//}