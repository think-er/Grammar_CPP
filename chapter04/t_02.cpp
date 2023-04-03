//#include <iostream>
//using namespace std;
//
//class Sample {
//	int a;
//public:
//	// this는 컴파일러가 선언하는 포인터
//	// 클래스의 멤버함수 내에서만 사용 가능
//	// this는 객체 자기 자신을 가리키는 포인터
//	// static 멤버 함수에서는 this 사용 불가
//	Sample* f() { return this; }
//	//Sample g() { return this; }
//	/*
//	this 포인터를 반환하는 함수는 해당 객체의 주소를 반환하므로, 포인터 형태의 반환 타입을 가져야 합니다. 
//	Sample g() 함수의 경우는 this 포인터가 Sample 클래스의 멤버 함수 안에서 생성되지만, 
//	반환 값의 타입이 Sample 클래스이기 때문에 컴파일러가 이를 지원하지 않는다는 에러를 발생시킵니다. 
//	이와 같은 경우에는 대신 Sample* 형태로 반환 타입을 변경하여 f() 함수와 같이 주소를 반환하도록 할 수 있습니다.
//	*/
//	void setA(int x) {
//		this->a = x;
//		(*this).a = this->a;
//	}
//
//	void setA(Sample* s, int x) {
//		s->a = x;
//	}
//
//	int getA() { return a; }
//};
//
//int main() {
//	Sample s;
//	cout << s.f() << endl;
//	cout << &s << endl;
//	s.setA(10);
//	cout << s.getA() << endl;
//	s.setA(&s, 100);
//	cout << s.getA() << endl;
//}