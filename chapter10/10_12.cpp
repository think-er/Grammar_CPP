//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main() {
//	map<string, string> dic;
//
//	dic["1"] = "아니";
//	dic["2"] = "야발";
//	dic["3"] = "수업";
//	dic["4"] = "언제 끝나노? ㅋㅋ";
//
//	cout << "저장된 단어 개수 " << dic.size() << endl;
//	string eng;
//	while (true) {
//		cout << "찾고 싶은 단어>> ";
//		getline(cin, eng);
//		if (eng == "exit")
//			break;
//		if (dic.find(eng) == dic.end())
//			cout << "없음" << endl;
//		else
//			cout << dic[eng] << endl;
//	}
//
//	cout << "종료합니다..." << endl;
//}