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
//	ColorPoint cp;
//	ColorPoint* pDer = &cp;
//
//	// Point* pBase = &cp;
//	// ������: �ּҰ��� ��� ����
//	// �θ� Ŭ������ �����Ͱ� �ڽ� Ŭ������ ����Ų��.
//	Point* pBase = pDer;
//
//	// �ڽ��� �θ��� ���� �� ������.
//	pDer->set(3, 4);
//	// �θ� ��ü�� �ڽ��� ���� ������ �� ����.
//	pBase->showPoint();
//
//	pDer->setColor("Red");
//	pDer->showColorPoint();
//
//	//pBase->showColorPoint();
//}