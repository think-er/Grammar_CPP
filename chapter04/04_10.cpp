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
//	cout << "생성하고자 하는 원의 개수?";
//	int n, radius;
//	cin >> n;
//	if (n <= 0) return 0;
//	Circle* pArray = new Circle[n];
//	for (int i = 0; i < n; i++) {
//		cout << "원" << i + 1 << ": ";
//		cin >> radius;
//		pArray[i].setRadius(radius);
//	}
//
//	int count = 0;
//	// p 또한 pArray가 가리키는 주소를 동일하게 가르키고 있는 것
//	Circle* p = pArray;
//	for (int i = 0; i < n; i++) {
//		cout << p->getArea() << ' ';
//		if (p->getArea() >= 100 && p->getArea() <= 200)
//			count++;
//		p++;
//	}
//
//	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
//	// delete p
//	delete[] pArray;
//	/*
//	deletep 대신 delete[] pArray를 사용해야 합니다. delete p를 실행하면 p가 가리키는 첫 번째 원소는 정상적으로 소멸되지만,
//	그 이후의 메모리 영역은 소멸되지 않았기 때문에 이상한 결과가 나타납니다. 
//	따라서 코드를 수정하여 delete[] pArray를 사용해야 합니다.
//	*/
//}
