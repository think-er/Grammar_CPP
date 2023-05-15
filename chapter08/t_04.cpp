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
//	// 며느리
//	Point* pBase, po;
//	// 시어머니, 아부지
//	pBase = &po;
//
//	// 원본의 객체가 부모 클래스의 객체였기 때문에, 다운캐스팅을 했다고 하더라도 자식 클래스의 멤버는 객체 공간에 존재하지 않는다.
//	pDer = (ColorPoint*)pBase;
//
//	pDer->setColor("Red");
//	pDer->showColorPoint();
//}