#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "This animal makes a sound.\n";
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "This dog barks.\n";
    }
};

class Cat : public Animal {
public:
    void speak() {
        std::cout << "This cat meows.\n";
    }
};

int main() {
    Animal* animals[3];
    animals[0] = new Animal();
    animals[1] = new Dog();
    animals[2] = new Cat();

    for (int i = 0; i < 3; i++) {
        animals[i]->speak();
    }

    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}
