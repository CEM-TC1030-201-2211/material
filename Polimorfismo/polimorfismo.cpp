#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Making animal noises..." << endl;
    }
};

class Dog: public Animal {
public:
    void sound() {
        cout << "Woof, woof..." << endl;
    }
};

class Cat: public Animal {
public:
    void sound() {
        cout << "Meow, meow..." << endl;
    }
};

void makingSoundsPointer(Animal *animal) {
    animal->sound();
}

void makingSoundsReference(Animal &animal) {
    animal.sound();
}

int main() {
    Animal animal{};
    animal.sound();

    Dog dog{};
    dog.sound();

    Cat cat{};
    cat.sound();

    Animal *animalPointer = &dog;
    animalPointer->sound();

    animalPointer = &cat;
    animalPointer->sound();

    makingSoundsPointer(&dog);
    makingSoundsPointer(&cat);
    makingSoundsPointer(animalPointer);

    makingSoundsReference(dog);
    makingSoundsReference(cat);
    makingSoundsReference(*animalPointer);

    Animal *myAnimals[3];
    myAnimals[0] = new Dog{};
    myAnimals[1] = new Cat{};
    myAnimals[2] = new Cat{};

    for (int i = 0; i < 3; i++) {
        myAnimals[i]->sound();
    }

    // for each
    for (Animal *animali : myAnimals) {
        animali->sound();
    }

}