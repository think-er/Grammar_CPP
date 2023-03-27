#include <iostream>
using namespace std;

class Tower {
	int m;
public:
	Tower() : Tower(1) { }
	Tower(int x) : m(x) { }
	int getHeight() { return m; }
};

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}