#include <iostream>
using namespace std;

int big(int a, int b) {
	int temp;
	int c = 100;
	if (a < b) temp = b;
	else temp = a;
	if (temp > c) return c;
	else return temp;
}

int big(int a, int b, int c) {
	int temp;
	if (a < b) temp = b;
	else temp = a;
	if (temp > c) return c;
	else return temp;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 600);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}