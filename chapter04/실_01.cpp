#include <iostream>
using namespace std;

int main() {
	int* arr = new int[5];
	cout << "���� 5�� �Է�>> ";
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	cout << "��� " << sum / 5.0;

	delete[] arr;
}