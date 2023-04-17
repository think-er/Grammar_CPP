//#define _crt_secure_no_warnings
#include <iostream>
#include <string>
using namespace std;

class person {
	string name;
	int id;
public:
	person(int id, string name);
	void changename(string name);
	void show() { cout << id << ',' << name << endl; }
};

person::person(int id, string name) {
	this->id = id;
	this->name.replace(0, name.length(), name);
}

//person::~person() {
//	if (name)
//		delete name;
//}

void person::changename(string name) {
	this->name.replace(0, name.length(), name);
}

int main() {
	person father(1, "kitae");
	person daughter(father);

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show();
	daughter.show();

	daughter.changename("grace");
	cout << "daughet �̸��� grace�� ������ �� ----" << endl;
	father.show();
	daughter.show();

	return 0;
}
