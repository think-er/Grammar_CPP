#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("�λ걤���� �ϱ� �ݰ");
	string copyAddress(address);

	char text[] = { 'C', 'C', 'C','C', 'C', 'C', '+', '+', '\0' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}