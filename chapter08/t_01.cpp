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
//	// 포인터: 주소값을 담는 변수
//	// 부모 클래스의 포인터가 자식 클래스를 가리킨다.
//	Point* pBase = pDer;
//
//	// 자식은 부모의 값을 다 가진다.
//	pDer->set(3, 4);
//	// 부모 객체는 자식의 값에 접근할 수 없다.
//	pBase->showPoint();
//
//	pDer->setColor("Red");
//	pDer->showColorPoint();
//
//	//pBase->showColorPoint();
//}