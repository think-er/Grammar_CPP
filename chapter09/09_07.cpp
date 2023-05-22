//#include <iostream>
//using namespace std;
//
//class Calculator {
//	void input() {
//		cout << "정수 2 개를 입력하세요 >> ";
//		cin >> a >> b;
//	}
//protected:
//	int a, b;
//	virtual int calc(int a, int b) = 0;
//public:
//	void run() {
//		input();
//		cout << "계산된 값은 " << calc(a, b) << endl;
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
//// 비정적 멤버인 경우에만 가상함수가 될 수 있다