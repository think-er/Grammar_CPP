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
//	~Rectangle();
//};
//
//Rectangle::Rectangle() : Rectangle(1, 1) { }
//Rectangle::Rectangle(int a) : Rectangle(a, a) { }
//Rectangle::Rectangle(int a, int b) : width(a), height(b) {
//	cout << "가로 : " << width << ", 세로 : " << height << "인 정사각형 생성!" << endl;
//}
//Rectangle::~Rectangle() {
//	cout << "가로 : " << width << ", 세로 : " << height << "인 정사각형 소멸!" << endl;
//	cout << "음하하하하하! 잘있어라 나는 먼저 간다!" << endl;
//}
//
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//}