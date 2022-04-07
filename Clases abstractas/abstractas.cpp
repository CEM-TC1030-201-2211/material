#include <iostream>
#include <string>
using namespace std;

// Clase abstacta -> No se puede instanciar
class Animal {
public:
    // Las clases hijas estarán obligas a implementar estas funciones.
    virtual void sound() = 0; // Función virtual pura
};

class Dog: public Animal {
public:
    void sound() {
        cout << "Woof, woof" << endl;
    }
};

int main() {
    // No se puede crear un objeto del tipo de una clase abstracta
    // Animal animal{};
    Dog dog{};
    dog.sound();

    // Sí se puede crear un apuntador del tipo de una clase abstracta
    Animal *animal = &dog;
    animal->sound();

}