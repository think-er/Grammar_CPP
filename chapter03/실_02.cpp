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
		cout << "에스프레소 1잔\n";
	}
	void drinkAmericano() {
		coffee -= 1;
		water -= 2;
		cout << "아메리카노 1잔\n";
	}
	void show() {
		cout << "커피 머신 상태, 커피: " << coffee << " 물: " << water << "\n\n";
	}
	void fill() {
		cout << "<커피 머신 채움>\n";
		coffee = 10;
		water = 10;
	}
};

int main() {
	CoffeeMachine java(5, 10);
	cout << "커피 머신 상태\n";
	cout << "커피량:5, 물량 : 10으로 초기화\n\n";
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.fill();
	java.show();
}