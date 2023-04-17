//#include <iostream>
//using namespace std;
//
//char& find(char s[], int index) {
//	// s[index] 라는 공간을 반환
//	return s[index];
//}
//
//int main() {
//	char name[] = "Mike";
//	cout << name << endl;
//
//	find(name, 0) = 'S';
//	cout << name << endl;
//
//	char& ref = find(name, 2);
//	ref = 't';
//	cout << name << endl;
//}
//
////#include <iostream>
////using namespace std;
////
////char* find(char s[], int index) {
////    return &s[index];
////}
////
////int main() {
////    char name[] = "Mike";
////    cout << name << endl;
////
////    *find(name, 0) = 'S';
////    cout << name << endl;
////
////    char* ptr = find(name, 2);
////    *ptr = 't';
////    cout << name << endl;
////}