#include <iostream>
#include <string>
using namespace std;

class Fraccion {
private:
    int numerador, denominador;
public:

    Fraccion(int numerador, int denominador): numerador{numerador}, denominador{denominador} {}

    friend Fraccion operator+(const Fraccion &lhs, const Fraccion &rhs) {
        if (lhs.denominador == rhs.denominador) {
            return Fraccion{lhs.numerador + rhs.numerador, lhs.denominador};
        } else {
            return Fraccion{lhs.numerador * rhs.denominador + rhs.numerador * lhs.denominador, lhs.denominador * rhs.denominador};
        }
    }

    friend Fraccion operator+(const Fraccion &fraccion, int entero) {
        return Fraccion{fraccion.numerador + entero * fraccion.denominador, fraccion.denominador};
    }

    // friend Fraccion operator+(int entero, const Fraccion &fraccion);

    friend Fraccion operator+(int entero, const Fraccion &fraccion) {
        return Fraccion{fraccion.numerador + entero * fraccion.denominador, fraccion.denominador};
    }

    friend ostream& operator<<(ostream &os, const Fraccion &fraccion) {
        cout << fraccion.numerador << " / " << fraccion.denominador;
        return os;
    }

};

// lhs -> left hand side
// rhs -> right hand side
// Fraccion operator+(int entero, const Fraccion &fraccion) {
//     return Fraccion{fraccion.numerador + entero * fraccion.denominador, fraccion.denominador};
// };

int main() {
    Fraccion f1{5, 3};
    Fraccion f2{7, 3};
    cout << "Fraccion 1: " << f1 << endl;
    cout << "Fraccion 2: " << f2 << endl;
    Fraccion f3 = 3 + f1;
    cout << "Fraccion 3: " << f2 << endl;
}