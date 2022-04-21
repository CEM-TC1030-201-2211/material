#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Inicia mi programa..." << endl;
    float x = 5;
    float y = 0;
    float z;
    try {
        cout << "Inicia mi bloque try/catch..." << endl;
        if (y == 0) {
            throw -1;
            cout << "Esto nunca va a aparecer..." << endl;
        }
        throw "Mi error...";
        z = x / y;
        cout << "z: " << z;
    } catch (int error_code) {
        cerr << "Error: "<< error_code << ". División entre 0." << endl;
    } catch (string &message) {
        cerr << message << endl;
    }

}