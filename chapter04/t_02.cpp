//#include <iostream>
//using namespace std;
//
//class Sample {
//	int a;
//public:
//	// this�� �����Ϸ��� �����ϴ� ������
//	// Ŭ������ ����Լ� �������� ��� ����
//	// this�� ��ü �ڱ� �ڽ��� ����Ű�� ������
//	// static ��� �Լ������� this ��� �Ұ�
//	Sample* f() { return this; }
//	//Sample g() { return this; }
//	/*
//	this �����͸� ��ȯ�ϴ� �Լ��� �ش� ��ü�� �ּҸ� ��ȯ�ϹǷ�, ������ ������ ��ȯ Ÿ���� ������ �մϴ�. 
//	Sample g() �Լ��� ���� this �����Ͱ� Sample Ŭ������ ��� �Լ� �ȿ��� ����������, 
//	��ȯ ���� Ÿ���� Sample Ŭ�����̱� ������ �����Ϸ��� �̸� �������� �ʴ´ٴ� ������ �߻���ŵ�ϴ�. 
//	�̿� ���� ��쿡�� ��� Sample* ���·� ��ȯ Ÿ���� �����Ͽ� f() �Լ��� ���� �ּҸ� ��ȯ�ϵ��� �� �� �ֽ��ϴ�.
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