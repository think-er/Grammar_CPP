#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int water;
public:
	CoffeeMachine(int coffee, int water) : coffee(coffee), water(water) { }
	void drinkEspresso() {
		coffee -= 1;
		water -= 1;
		cout << "���������� 1��\n";
	}
	void drinkAmericano() {
		coffee -= 1;
		water -= 2;
		cout << "�Ƹ޸�ī�� 1��\n";
	}
	void show() {
		cout << "Ŀ�� �ӽ� ����, Ŀ��: " << coffee << " ��: " << water << "\n\n";
	}
	void fill() {
		cout << "<Ŀ�� �ӽ� ä��>\n";
		coffee = 10;
		water = 10;
	}
};

int main() {
	CoffeeMachine java(5, 10);
	cout << "Ŀ�� �ӽ� ����\n";
	cout << "Ŀ�Ƿ�:5, ���� : 10���� �ʱ�ȭ\n\n";
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.fill();
	java.show();
}