//#include <iostream>
//using namespace std;
//
//class Calculator {
//	void input() {
//		cout << "���� 2 ���� �Է��ϼ��� >> ";
//		cin >> a >> b;
//	}
//protected:
//	int a, b;
//	virtual int calc(int a, int b) = 0;
//public:
//	void run() {
//		input();
//		cout << "���� ���� " << calc(a, b) << endl;
//	}
//};
//
//class Adder : public Calculator {
//	int calc(int a, int b) {
//		return a + b;
//	}
//};
//
//class Subractor : public Calculator {
//	int calc(int a, int b) {
//		return a - b;
//	}
//};
//
////int calculator::calc(int a, int b) {
////	return a + b;
////}
//
//
//
//int main() {
//	Adder adder;
//	Subractor subtractor;
//
//	adder.run();
//	subtractor.run();
//}
//
//// virtual int static calc(int a, int b) = 0;
//// ������ ����� ��쿡�� �����Լ��� �� �� �ִ�