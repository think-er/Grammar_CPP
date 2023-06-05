#include <iostream>
using namespace std;

template <class T>
void getAverage(T arr[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << "Æò±Õ°ª: " << sum / size;
}

int main() {
	double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	getAverage(list, 5);
}