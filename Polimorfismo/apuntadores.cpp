#include <iostream>
using namespace std;

void intercambiar_valores(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 5;
    int *pointer = &a;
    int **pointerToPointer = &pointer;

    cout << "a: " << a << endl; // variable a
    cout << "&a: " << &a << endl; // referencia a a (dirección en memoria donde está a)

    cout << "pointer: " << pointer << endl; // apuntador a la dirección de a
    cout << "&pointer: " << &pointer << endl; // referencia al apuntador
    cout << "*pointer: " << *pointer << endl; // valor del lugar al que apunta mi apuntador

    cout << "pointerToPointer: " << pointerToPointer << endl;
    cout << "&pointerToPointer: " << &pointerToPointer << endl;
    cout << "*pointerToPointer: " << *pointerToPointer << endl;

    int x = 3;
    int y = 8;

    intercambiar_valores(&x, &y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    int size;
    cout << "Indica el tamaño de tu arreglo: ";
    cin >> size;

    int  *arreglo = new int[size];
    delete[] arreglo;

}