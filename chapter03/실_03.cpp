#include "CoffeeMachine.h"
#include <iostream>
using namespace std;

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