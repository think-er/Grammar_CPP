#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	int ch;
	while ((ch == cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n') break;
	}
}

void get2() {
	cout << "cin.get(char&)�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break;
		cout.put(ch);
		if (ch == '\n') break;
	}
}

int main() {
	get1();
	get2();
}