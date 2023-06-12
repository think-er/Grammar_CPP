#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) {
		cout << "c:\\windows\\system.ini 열기 실패" << endl;
		return 0;
	}
	string str;
	while (getline(fin, str)) {
		cout << str << endl;
	}

	fin.close();
}