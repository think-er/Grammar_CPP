#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5];

	for (int i = 0; i < 3; i++) {
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];
	// C++���� string Ŭ������ < �����ڸ� �����ε��Ͽ�, �� ���� string ��ü�� ������ ������ ���� �� �ֵ��� �����Ǿ� ����.
	for (int i = 1; i < 3; i++) {
		if (latter < names[i]) {
			latter = names[i];
		}
	}
	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
}