//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string language("C++");
//	string answer("Bjarne Stroustrup");
//	string developer;
//
//	// getline()은 string 타입의 C++ 문자열을 입력 받기 위해 제공되는 전역 함수
//	// cin의 객체에 매달려있는 것이 아니라 전체에서 쓸 수 있는 것이다. 
//	while (true) {
//		cout << language + " 프로그래밍 언어를 개발한 개발자는";
//		cout << "(힌트 : 첫글자는 " << answer[0] << ")?";
//
//		getline(cin, developer);
//		if (answer == developer) {
//			cout << "이걸 이제 맞추네 ㅋㅋㅋ ㄹㅇㅋㅋ";
//			break;
//		}
//		else
//			cout << "아 ㅋㅋㅋ 틀렸다고 너는 무한 반복이다 ㄹㅇㅋㅋ\n\n";
//	}
//}