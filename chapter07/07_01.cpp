//#include <iostream>
//using namespace std;
//
//class Rect; // ���� ����
//// Rect Ŭ������ ����Ǳ� ���� ���� �����Ǵ� ������ ������ ���� ���� ���漱��
//bool equals(Rect r, Rect s);
//// ���� ������ ���� equals() �Լ� ����
//
//class Rect {
//	int width, height;
//public:
//	Rect(int width, int height) { this->width = width; this->height = height; }
//	friend bool equals(Rect r, Rect s);
//};
//
//bool equals(Rect r, Rect s) {
//	if (r.width == s.width && r.height == s.height) return true;
//	// equals() �Լ��� private �Ӽ��� ���� width, height�� ������ �� �ִ�. 
//	else return false;
//}
//
//int main() {
//	Rect a(3, 2), b(3, 2);
//	if (equals(a, b)) cout << "equal" << endl;
//	else cout << "not equal" << endl;
//}
