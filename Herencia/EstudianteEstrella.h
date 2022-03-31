// #pragma once

#ifndef ESTUDIANTEESTRELLA_H_
#define ESTUDIANTEESTRELLA_H_

#include <iostream>
#include <string>
#include "Estudiante.h"
using namespace std;

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

#endif