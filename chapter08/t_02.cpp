//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//    virtual void makeSound() {
//        cout << "������ �Ҹ��� ����." << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void makeSound() override {
//        cout << "�۸�!" << endl;
//    }
//};
//
//class Cat : public Animal {
//public:
//    void makeSound() override {
//        cout << "�߿�!" << endl;
//    }
//};
//
//
//int main() {
//    Animal* animalPtr;
//
//    Dog dog;
//    Cat cat;
//
//    animalPtr = &dog;
//    animalPtr->makeSound(); // "�۸�!" ���
//
//    animalPtr = &cat;
//    animalPtr->makeSound(); // "�߿�!" ���
//}