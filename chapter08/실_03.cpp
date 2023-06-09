#include <iostream>
using namespace std;

class Person {
public:
	void eat() { cout << "먹을 수 있음." << endl; }
	void talk() { cout << "말할 수 있음." << endl; }
	void run() { cout << "걸을 수 있음." << endl; }
};

class Professor : public Person {
public:
	string job;
	int age;
	void teach() { cout << "가르칠 수 있음." << endl << endl; }
	void BasicPrint();
};

class TennisPlayer : public Person {
public:
	string job;
	int age;
	void playTennis() { cout << "테니스 경기를 할 수 있음." << endl << endl; }
	void BasicPrint();
};

void Professor::BasicPrint() {
	cout << "나의 직업: " << job << endl;
	cout << "나의 나이: " << age << endl;
	run();
	talk();
}

void TennisPlayer::BasicPrint() {
	cout << "나의 직업: " << job << endl;
	cout << "나의 나이: " << age << endl;
	run();
	talk();
}

int main() {
	Professor teacher;
	teacher.job = "교수";
	teacher.age = 39;
	teacher.BasicPrint();
	teacher.teach();

	TennisPlayer player;
	player.job = "테니스 선수";
	player.age = 23;
	player.BasicPrint();
	player.playTennis();
	
	return 0;
}