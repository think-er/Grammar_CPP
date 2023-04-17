//#include <iostream>
//using namespace std;
//
//// 함수 호출할 때 매개변수를 참조변수로, 리턴값을 참조변수로
//int main() {
//	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
//	int i = 1;
//	int n = 2;
//	int& refn = n;
//	n = 4;
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//
//	refn = i;
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//
//	// 참조 변수 == 원래 변수
//	int* p = &refn;
//	*p = 20;
//	cout << i << '\t' << n << '\t' << refn << endl;
//}