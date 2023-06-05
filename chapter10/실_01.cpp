#include <iostream>
using namespace std;

template <class T1, class T2>
bool equalArrays(T1 arr1[], T2 arr2[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr1[i] != arr2[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	double a[] = { 0.1, 2.3, 3.5 };
	double b[] = { 0.1, 2.3, 3.5 };
	if (equalArrays(x, y, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;
	if (equalArrays(a, b, 3)) cout << "같다" << endl;
	else cout << "다르다" << endl;
}