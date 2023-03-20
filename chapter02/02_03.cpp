//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "너비를 입력하세요>>";
//
//	double base;
//
//	// cin은 키보드와 C++ 응용프로그램을 연결하는 C++ 표준 입력 스트림 객체(standard input stream object)이다. 
//	// 키보드로 입력되는 값들은 모두 cin 객체의 스트림 버퍼로 들어오며, 응용프로그램은 cin 객체로부터 입력된 키 값을 읽는다.
//	// 사용자가 입력한 키들은 일차적으로 cin의 스트림 버퍼에 저장되며, 
//	// <Enter> 키가 입력되면 비로소 >> 연산자가 cin의 입력 버퍼에서 키 값을 끌어내어 변수에 저장
//	// 또한 키 입력 도중 사용자가 <Backspace> 키를 치면, cin의 스트림 버퍼에 입력된 키를 제거할 수 있다.
//	// <Enter> 키를 입력하기 전까지는 사용자의 키 입력이 완료된 상태가 아니다.
//	// <Enter> 키를 입력하여야 비로소 >> 연산자가 작동한다는 사실을 기억해야 한다.
//
//	// 스트림 / 버퍼
//	cin >> base;
//
//	cout << "높이를 입력하세요>>";
//
//	double height;
//	cin >> height;
//
//	double area = base * height / 2;
//	cout << "면적은 " << area << "\n";
//}