#include <iostream>
using namespace std;

template <class T>
bool search(char ch, T arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == ch)
			return true;
	}
	return false;
}

int main() {
	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	if (search('e', c, 5))
		cout << "e�� �迭 c�� ���ԵǾ� �ִ�";
	else
		cout << "e�� �迭 c�� ���ԵǾ� ���� �ʴ�";
	cout << endl;
}