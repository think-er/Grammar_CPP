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
		cout << "메뉴는 1 ~ 3 까지 입력할 수 있습니다." << endl;
}

void EnglishDictionary::menu() {
	int choice;
	cout << "=================================================\n";
	cout << "단어 추가 : 1, 단어 테스트 : 2, 종료 : 3\n";
	cout << "=================================================\n";
	cout << "하나를 선택하세요 : ";
	cin >> choice;
	setChoice(choice);
}

void EnglishDictionary::wordAdd() {
	string word, meaning;
	cout << "추가할 단어 : ";
	cin >> word;
	cout << "추가할 의미 : ";
	cin >> meaning;
	dic[word] = meaning;
}

void EnglishDictionary::wordTest() {
	string word;
	cout << "단어를 입력하시오 : ";
	cin >> word;
	cout << word << "의 의미는 " << dic[word] << endl;
}

int main() {
	EnglishDictionary *p = new EnglishDictionary();
	p->start();
	delete p;
}