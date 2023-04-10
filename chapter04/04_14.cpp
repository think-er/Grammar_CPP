#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
	getline(cin, s, '\n');


	int sum = 0;
	int startIndex = 0;
	while (true) {
		// s의 startIndex 위치부터 검색
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) {
			// s의 인덱스 startIndex에서 끝까지 문자열 리턴
			string part = s.substr(startIndex);
			if (part == "") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}

		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}

	cout << "숫자들의 합은 " << sum;
}