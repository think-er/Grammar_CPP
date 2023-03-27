#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine {
	int coffee;
	int water;
public:
	CoffeeMachine(int coffee, int water);
	void drinkEspresso();
	void drinkAmericano();
	void show();
	void fill();
};

#endif // !COFFEEMACHINE_H