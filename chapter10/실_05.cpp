#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

class EnglishDictionary {
	int choice;
	bool loop;
	map<string, string> dic;
	void menu();
	void wordAdd();
	void wordTest();
	void end() { this->loop = 0; }
	void setChoice(int choice);
public:
	EnglishDictionary() { this->choice = 0; this->loop = true; }
	void start() { while (loop) { menu(); } }
};

void EnglishDictionary::setChoice(int choice) {
	if (choice == 1)
		wordAdd();
	else if (choice == 2)
		wordTest();
	else if (choice == 3)
		end();
	else
		cout << "�޴��� 1 ~ 3 ���� �Է��� �� �ֽ��ϴ�." << endl;
}

void EnglishDictionary::menu() {
	int choice;
	cout << "=================================================\n";
	cout << "�ܾ� �߰� : 1, �ܾ� �׽�Ʈ : 2, ���� : 3\n";
	cout << "=================================================\n";
	cout << "�ϳ��� �����ϼ��� : ";
	cin >> choice;
	setChoice(choice);
}

void EnglishDictionary::wordAdd() {
	string word, meaning;
	cout << "�߰��� �ܾ� : ";
	cin >> word;
	cout << "�߰��� �ǹ� : ";
	cin >> meaning;
	dic[word] = meaning;
}

void EnglishDictionary::wordTest() {
	string word;
	cout << "�ܾ �Է��Ͻÿ� : ";
	cin >> word;
	cout << word << "�� �ǹ̴� " << dic[word] << endl;
}

int main() {
	EnglishDictionary *p = new EnglishDictionary();
	p->start();
	delete p;
}