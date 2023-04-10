#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5];

	for (int i = 0; i < 3; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];
	// C++에서 string 클래스는 < 연산자를 오버로딩하여, 두 개의 string 객체를 사전식 순서로 비교할 수 있도록 구현되어 있음.
	for (int i = 1; i < 3; i++) {
		if (latter < names[i]) {
			latter = names[i];
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
}