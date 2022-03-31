// #pragma once

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

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
};

#endif