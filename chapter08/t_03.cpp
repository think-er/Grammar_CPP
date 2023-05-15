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
//	// 아들
//	ColorPoint* pDer;
//	// 며느리
//
//	// 업캐스팅: 며느리가 아들을 가리킨다.
//	Point* pBase = &cp;
//	pBase->set(3, 4);
//	pBase->showPoint();
//
//	// pBase = 아부지의 주소를 가지고 있는 변수
//	// 다운캐스팅: 며느리가 아부지를 가리키게 된다
//	pDer = (ColorPoint*)pBase;
//
//	pDer->setColor("Red");
//	pDer->showColorPoint();
//}