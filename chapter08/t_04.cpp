//#include <iostream>
//#include <string>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	void set(int x, int y) { this->x = x; this->y = y; }
//	void showPoint() {
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//
//class ColorPoint : public Point {
//	string color;
//public:
//	void setColor(string color) { this->color = color; }
//	void showColorPoint();
//};
//
//void ColorPoint::showColorPoint() {
//	cout << color << ":";
//	showPoint();
//}
//
//int main() {
//	ColorPoint* pDer;
//	// �����
//	Point* pBase, po;
//	// �þ�Ӵ�, �ƺ���
//	pBase = &po;
//
//	// ������ ��ü�� �θ� Ŭ������ ��ü���� ������, �ٿ�ĳ������ �ߴٰ� �ϴ��� �ڽ� Ŭ������ ����� ��ü ������ �������� �ʴ´�.
//	pDer = (ColorPoint*)pBase;
//
//	pDer->setColor("Red");
//	pDer->showColorPoint();
//}