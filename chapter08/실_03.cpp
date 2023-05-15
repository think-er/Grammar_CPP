#include <iostream>
using namespace std;

class Person {
public:
	void eat() { cout << "���� �� ����." << endl; }
	void talk() { cout << "���� �� ����." << endl; }
	void run() { cout << "���� �� ����." << endl; }
};

class Professor : public Person {
public:
	string job;
	int age;
	void teach() { cout << "����ĥ �� ����." << endl << endl; }
	void BasicPrint();
};

class TennisPlayer : public Person {
public:
	string job;
	int age;
	void playTennis() { cout << "�״Ͻ� ��⸦ �� �� ����." << endl << endl; }
	void BasicPrint();
};

void Professor::BasicPrint() {
	cout << "���� ����: " << job << endl;
	cout << "���� ����: " << age << endl;
	run();
	talk();
}

void TennisPlayer::BasicPrint() {
	cout << "���� ����: " << job << endl;
	cout << "���� ����: " << age << endl;
	run();
	talk();
}

int main() {
	Professor teacher;
	teacher.job = "����";
	teacher.age = 39;
	teacher.BasicPrint();
	teacher.teach();

	TennisPlayer player;
	player.job = "�״Ͻ� ����";
	player.age = 23;
	player.BasicPrint();
	player.playTennis();
	
	return 0;
}