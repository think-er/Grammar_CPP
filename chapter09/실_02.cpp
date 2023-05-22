#include <iostream>
using namespace std;

class Weapon {
public:
	virtual void load() = 0;
	virtual ~Weapon() { }
};

class Bom : public Weapon {
private:
	void load() override { cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù." << endl; }
public:
	virtual ~Bom() { }
};

class Gun : public Weapon {
private:
	void load() override { cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù." << endl; }
public:
	virtual ~Gun() { }
};

int main() {
	Weapon* p[3];
	p[0] = new Gun();
	p[1] = new Bom();
	p[2] = new Bom();
	
	for (int i = 0; i < 3; i++) {
		p[i]->load();
		delete p[i];
	}
}