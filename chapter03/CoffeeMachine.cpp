#include <iostream>
#include "CoffeeMachine.h"
using namespace std;

CoffeeMachine::CoffeeMachine(int coffee, int water) : coffee(coffee), water(water) { }

void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
	cout << "에스프레소 1잔\n";
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
	cout << "아메리카노 1잔\n";
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피: " << coffee << " 물: " << water << "\n\n";
}

void CoffeeMachine::fill() {
	cout << "<커피 머신 채움>\n";
	coffee = 10;
	water = 10;
}