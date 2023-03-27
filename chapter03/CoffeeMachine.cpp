#include <iostream>
#include "CoffeeMachine.h"
using namespace std;

CoffeeMachine::CoffeeMachine(int coffee, int water) : coffee(coffee), water(water) { }

void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
	cout << "���������� 1��\n";
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
	cout << "�Ƹ޸�ī�� 1��\n";
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��: " << coffee << " ��: " << water << "\n\n";
}

void CoffeeMachine::fill() {
	cout << "<Ŀ�� �ӽ� ä��>\n";
	coffee = 10;
	water = 10;
}