#include <iostream>
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "��" << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	friend bool operator==(Book op1, int op2);
	friend bool operator==(Book op1, string op2);
	friend bool operator==(Book op1, Book op2);
};

bool operator==(Book op1, int op2) {
	if (op1.price == op2) return true;
	else return false;
}

bool operator==(Book op1, string op2) {
	if (op1.title == op2) return true;
	else return false;
}

bool operator==(Book op1, Book op2) {
	if (op1.price == op2.price && op1.title == op2.title
		&& op1.pages == op2.pages) return true;
	else return false;
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}