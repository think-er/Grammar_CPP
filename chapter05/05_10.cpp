////#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//	string name;
//	int id;
//public:
//	Person(int id, string name);
//	void changeName(string name);
//	void show() { cout << id << ',' << name << endl; }
//};
//
//Person::Person(int id, string name) {
//	this->id = id;
//	//this->name = new char[len + 1];
//	this->name.replace(0, name.length(), name);
//}
//
////Person::~Person() {
////	if (name)
////		delete name;
////}
//
//void Person::changeName(string name) {
//	//if (strlen(name) > strlen(this->name))
//	//	return;
//	this->name.replace(0, name.length(), name);
//}
//
//int main() {
//	Person father(1, "Kitae");
//	Person daughter(father);
//
//	cout << "daughter ��ü ���� ���� ----" << endl;
//	father.show();
//	daughter.show();
//
//	daughter.changeName("Grace");
//	cout << "daughet �̸��� Grace�� ������ �� ----" << endl;
//	father.show();
//	daughter.show();
//
//	return 0;
//}
