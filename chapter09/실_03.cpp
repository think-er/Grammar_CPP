#include <iostream>
using namespace std;

class HomeApplication {
protected:
	int price;
public:
	virtual void getPrcie() = 0;
	HomeApplication(int price) { this->price = price; }
	virtual ~HomeApplication() { }
};

class Televison : public HomeApplication {
private:
	void getPrcie() override {
		cout << "텔레비전 가격: " << price * 0.9 << endl;
	}
public:
	Televison(int price) : HomeApplication(price) { }
	virtual ~Televison() { }
};

class Refrigerator : public HomeApplication {
private:
	void getPrcie() override {
		cout << "냉장고 가격: " << price * 0.95 << endl;
	}
public:
	Refrigerator(int price) : HomeApplication(price) { }
	virtual ~Refrigerator() { }
};

int main() {
	HomeApplication* p[3];
	p[0] = new Televison(100000);
	p[1] = new Refrigerator(200000);
	p[2] = new Televison(300000);

	for (int i = 0; i < 3; i++) {
		p[i]->getPrcie();
		delete p[i];
	}
}