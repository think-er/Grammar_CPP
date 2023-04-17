#include <iostream>

class Accmulator {
	int value;
public:
	Accumulator(int value);
	Accmulator& add(int n);
	int get() { return value; }
};

int main() {

}