//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() {
//	cout << "�����ϰ��� �ϴ� ���� ����?";
//	int n, radius;
//	cin >> n;
//	if (n <= 0) return 0;
//	Circle* pArray = new Circle[n];
//	for (int i = 0; i < n; i++) {
//		cout << "��" << i + 1 << ": ";
//		cin >> radius;
//		pArray[i].setRadius(radius);
//	}
//
//	int count = 0;
//	// p ���� pArray�� ����Ű�� �ּҸ� �����ϰ� ����Ű�� �ִ� ��
//	Circle* p = pArray;
//	for (int i = 0; i < n; i++) {
//		cout << p->getArea() << ' ';
//		if (p->getArea() >= 100 && p->getArea() <= 200)
//			count++;
//		p++;
//	}
//
//	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;
//	// delete p
//	delete[] pArray;
//	/*
//	deletep ��� delete[] pArray�� ����ؾ� �մϴ�. delete p�� �����ϸ� p�� ����Ű�� ù ��° ���Ҵ� ���������� �Ҹ������,
//	�� ������ �޸� ������ �Ҹ���� �ʾұ� ������ �̻��� ����� ��Ÿ���ϴ�. 
//	���� �ڵ带 �����Ͽ� delete[] pArray�� ����ؾ� �մϴ�.
//	*/
//}
