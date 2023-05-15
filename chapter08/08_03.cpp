//#include <iostream>
//#include <string>
//using namespace std;
//
//class TV {
//	int size;
//public:
//	TV(int size = 20) { this->size = size; }
//	int getSize() { return size; }
//};
//
//// 호출 순서: C() -> B() -> A()
//
//class WideTV : public TV {
//	bool videoIn;
//public:
//	WideTV(int size, bool videoIn) : TV(size) {
//		this->videoIn = videoIn;
//	}
//	bool getVideoIn() { return videoIn; }
//};
//
//class SmartTV : public WideTV {
//	string ipAddr;
//public:
//	string getIpAddr() { return ipAddr; }
//
//	SmartTV(string ipAddr, int size) : WideTV(size, true) {
//		this->ipAddr = ipAddr;
//	}
//
//};
//
//int main() {
//	SmartTV htv("192.0.0.1", 32);
//	cout << "size=" << htv.getSize() << endl;
//	cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
//	cout << "IP=" << htv.getIpAddr() << endl;
//}