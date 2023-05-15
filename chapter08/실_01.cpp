#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; } 
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

int main() {
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	NamedCircle c[5];
	int max_idx;

	for (int i = 0; i < 5; i++) {
		int radius;
		string name;
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		c[i].setRadius(radius);
		c[i].setName(name);
	}


	int max_area = -1;
	for (int i = 0; i < 5; i++) {
		if (max_area < c[i].getArea()) {
			max_idx = i;
			max_area = c[i].getArea();
		}
	}

	cout << "���� ������ ū ���ڴ� " << c[max_idx].getName() << "�Դϴ�.";

}