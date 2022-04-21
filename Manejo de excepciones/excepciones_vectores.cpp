#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> lista;
    lista.push_back(3);
    lista.push_back(5);
    try {
        cout << "Iniciando bloque try/catch..." << endl;
        lista.at(3);
        cout << "Después de acceder a indice 3..." << endl;
    } catch (exception e) {
        cerr << e.what() << endl;
    }
}