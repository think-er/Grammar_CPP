//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//    virtual void makeSound() {
//        cout << "悼拱捞 家府甫 辰促." << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void makeSound() override {
//        cout << "港港!" << endl;
//    }
//};
//
//class Cat : public Animal {
//public:
//    void makeSound() override {
//        cout << "具克!" << endl;
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
//    animalPtr->makeSound(); // "港港!" 免仿
//
//    animalPtr = &cat;
//    animalPtr->makeSound(); // "具克!" 免仿
//}