#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	int circle_cnt, radius;
	int cnt = 0;
	cout << "원의 개수 >> ";
	cin >> circle_cnt;
	Circle* p = new Circle[circle_cnt];
	for (int i = 0; i < circle_cnt; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;
		p[i].setRadius(radius);
		if (p[i].getArea() > 100)
			cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
}