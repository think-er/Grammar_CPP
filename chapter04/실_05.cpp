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
	cout << "���� ���� >> ";
	cin >> circle_cnt;
	Circle* p = new Circle[circle_cnt];
	for (int i = 0; i < circle_cnt; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		p[i].setRadius(radius);
		if (p[i].getArea() > 100)
			cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�";
}