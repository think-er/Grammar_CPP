#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle circles[3];
	int radius;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;
		circles[i].setRadius(radius);
		if (circles[i].getArea() > 100)
			cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
}