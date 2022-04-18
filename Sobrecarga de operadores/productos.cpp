#include <iostream>
#include <string>
using namespace std;

class Producto {
private:
    int cantidad;
    float precio;
public:
    Producto(int cantidad, float precio): cantidad{cantidad}, precio{precio} {}

    friend ostream& operator<<(ostream &os, const Producto &producto) {
        cout << "Cantidad: " << producto.cantidad << " - Precio: $" << producto.precio;
        return os;
    }

};

class Libro: public Producto {
private:
    string titulo, autor;
public:
    Libro(string titulo, string autor, int cantidad, float precio): 
        Producto{cantidad, precio}, titulo{titulo}, autor{autor} {}

};

class Pelicula: public Producto {
private:
    string titulo;
    int duracion;
public:
    Pelicula(string titulo, int duracion, int cantidad, float precio):
        Producto{cantidad, precio}, titulo{titulo}, duracion{duracion} {}
};

int main() {
    Producto *miCarrito[3];
    // título, autor, cantidad, precio
    miCarrito[0] = new Libro{"Astrophysics for People in a Hurry", "Neil Degrasse Tyson", 1, 500};
    // título, duración, cantidad, precio
    miCarrito[1] = new Pelicula{"Spider-Man: No Way Home", 150, 2, 300};
    miCarrito[2] = new Pelicula{"King Richard", 144, 1, 250};

    float total = 0;
    for (Producto *ptr : miCarrito) {
        cout << *ptr << endl;
        // total += *ptr;
    }
    cout << "Total a pagar: " << total << endl;

}