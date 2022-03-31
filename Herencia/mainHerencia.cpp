#include "Estudiante.h"
#include "EstudianteEstrella.h"

int main() {
    Estudiante e1("Juan", 20, 786252);
    EstudianteEstrella ee1("Joahan", 18, 1748222, "Estudiante estrella de la clase de POO");
    e1.presentarse();
    ee1.presentarse();
}