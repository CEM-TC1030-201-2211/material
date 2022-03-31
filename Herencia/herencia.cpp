#include <iostream>
#include <string>
using namespace std;

class Persona {
// protected -> Da acceso total a estos atributos y métodos en esta clase y en las clases hijas
protected:
    string nombre;
    int edad;
public:
    Persona(string nombre, int edad): nombre(nombre), edad(edad) {
        cout << "Llamando al constructor de Persona..." << endl;
    }
    void presentarse() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " a" << (char)164 << "os." << endl;
    }
    // Getter de nombre -> Da acceso de lectura al atributo tanto a las clases hijas como al exterior
    // string getNombre() {
    //     return nombre;
    // }
    // Setter de nombre -> Da acceso de escritura al atributo tanto a las clases hijas como al exterior
    // void setNombre(string nombre) {
    //     this->nombre = nombre;
    // }
};

class Estudiante: public Persona {
private:
    int matricula;
public:
    Estudiante(string nombre, int edad, int matricula): Persona(nombre, edad), matricula(matricula) {
        cout << "Llamando al constructor de Estudiante..." << endl;
    }
    void tomarClase() {
        cout << "Soy " << nombre << " y estoy tomando clase..." << endl;
    }
    // void presentarse() {
    //     cout << "Soy " << nombre << " y mi matrícula es " << matricula << endl;
    // }
};

class EstudianteEstrella: public Estudiante {
private:
    string reconocimiento;
public:
    EstudianteEstrella(string nombre, int edad, int matricula, string reconocimiento):
        Estudiante(nombre, edad, matricula), reconocimiento(reconocimiento) {
            cout << "Llamando al constructor de EstudianteEstrella..." << endl;
        }
    void presentarse() {
        cout << "Soy " << nombre << " y mi reconocimiento es " << reconocimiento << endl;
    }
};

int main() {
    Estudiante e1("Juan", 20, 786252);
    EstudianteEstrella ee1("Joahan", 18, 1748222, "Estudiante estrella de la clase de POO");
    e1.presentarse();
    ee1.presentarse();
}