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
//	cout << "���� : " << width << ", ���� : " << height << "�� ���簢�� ����!" << endl;
//}
//Rectangle::~Rectangle() {
//	cout << "���� : " << width << ", ���� : " << height << "�� ���簢�� �Ҹ�!" << endl;
//	cout << "������������! ���־�� ���� ���� ����!" << endl;
//}
//
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//}