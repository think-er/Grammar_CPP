//#include <iostream>
//using namespace std;
//
//class Book {
//	string title;
//	int price;
//	int pages;
//public:
//	Book(string title = "", int price = 0, int pages = 0) {
//		this->title = title; this->price = price; this->pages = pages;
//	}
//	void show() {
//		cout << title << ' ' << price << "��" << pages << " ������" << endl;
//	}
//	string getTitle() { return title; }
//	bool operator==(int price) {
//		if (this->price == price)
//			return true;
//		else
//			return false;
//	}
//	bool operator==(string title) {
//		if (this->title == title)
//			return true;
//		else
//			return false;
//	}
//	bool operator==(Book op2) {
//		if (this->title == title && this->price == price && this->pages == pages)
//			return true;
//		else
//			return false;
//	}
//};
//
//
//int main() {
//	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
//	if (a == 30000) cout << "���� 30000��" << endl;
//	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
//	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
//}