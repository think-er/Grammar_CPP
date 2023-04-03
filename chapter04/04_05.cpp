//#include <iostream>
//using namespace std;
//
//int main() {
//	int* p;
//	p = new int;
//
//	/* p가 NULL이면, 메모리 할당 실패 */
//	if (!p) {
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//
//	*p = 5;
//	int n = *p;
//	cout << "*p = " << *p << endl;
//	cout << "n = " << n << endl;
//
//	delete p;
//}