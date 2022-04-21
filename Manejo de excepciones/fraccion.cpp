#include <iostream>
#include <string>
#include <exception>
using namespace std;

class FraccionException: public exception {
private:
    string mensaje;
public:
    FraccionException(string mensaje): mensaje{mensaje} {}

    virtual const char* what() {
        return mensaje.c_str();
    }

};

class Fraccion {
private:
    int numerador, denominador;
public:

    Fraccion(int numerador, int denominador): numerador{numerador}, denominador{denominador} {
        if (denominador == 0) {
            throw FraccionException("Error - El denominador no puede ser 0.");
        }
    }

    friend Fraccion operator+(const Fraccion &lhs, const Fraccion &rhs) {
        if (lhs.denominador == rhs.denominador) {
            return Fraccion{lhs.numerador + rhs.numerador, lhs.denominador};
        } else {
            return Fraccion{lhs.numerador * rhs.denominador + rhs.numerador * lhs.denominador, lhs.denominador * rhs.denominador};
        }
    }

    friend Fraccion operator-(const Fraccion &lhs, const Fraccion &rhs) {
        if (lhs.denominador == rhs.denominador) {
            return Fraccion{lhs.numerador - rhs.numerador, lhs.denominador};
        } else {
            return Fraccion{lhs.numerador * rhs.denominador - rhs.numerador * lhs.denominador, lhs.denominador * rhs.denominador};
        }
    }

    friend Fraccion operator*(const Fraccion &lhs, const Fraccion &rhs) {        
        return Fraccion{lhs.numerador * rhs.numerador, lhs.denominador * rhs.denominador};
    }

    friend Fraccion operator/(const Fraccion &lhs, const Fraccion &rhs) {        
        return Fraccion{lhs.numerador * rhs.denominador, lhs.denominador * rhs.numerador};
    }

    friend ostream& operator<<(ostream &os, const Fraccion &fraccion) {
        cout << fraccion.numerador << " / " << fraccion.denominador;
        return os;
    }

};

int main() {
    try {
        Fraccion f1{5, 3};
        Fraccion f2{7, 0};
        cout << "Fraccion 1: " << f1 << endl;
        cout << "Fraccion 2: " << f2 << endl;
        Fraccion f3 = f1 + f2;
        cout << "Fraccion 3: " << f3 << endl;
        Fraccion f4 = f1 - f2;
        cout << "Fraccion 4: " << f4 << endl;
        Fraccion f5 = f1 * f2;
        cout << "Fraccion 5: " << f5 << endl;
        Fraccion f6 = f1 / f2;
        cout << "Fraccion 6: " << f6 << endl;
    } catch (FraccionException ex) {
        cerr << ex.what() << endl;
    }
}