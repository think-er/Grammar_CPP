#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("何魂堡开矫 合备 陛邦悼");
	string copyAddress(address);

	char text[] = { 'C', 'C', 'C','C', 'C', 'C', '+', '+', '\0' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}