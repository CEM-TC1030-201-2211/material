#include <iostream>
#include <string>
#include <exception>
using namespace std;

class MiExcepcion: public exception {
protected:
    string mensaje;
public:
    MiExcepcion(string mensaje): mensaje{mensaje} {}

    virtual const char* what() {
        return mensaje.c_str();
    }

};

class MiExcepcionEspecifica: public MiExcepcion {
    
};

int main() {
    try {
        cout << "Haciendo algo..." << endl;
        throw MiExcepcion{"Algo muy malo paso..."};
    } catch (MiExcepcion ex) {
        cout << ex.what() << endl;
    }
}