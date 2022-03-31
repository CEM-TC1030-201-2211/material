// #pragma once

#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string>
using namespace std;

class Persona {
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
};

#endif