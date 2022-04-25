#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Padre {
public:
    virtual void hola() {
        cout << "Padre" << endl;
    }
};

class Hijo : public Padre {
public:
    virtual void hola() {
        cout << "Hijo" << endl;
    }
};

class Nieto : public Hijo {
public:
    void hola() {
        cout << "Nieto" << endl;
    }
};

int main() {
    vector<Padre *> lista;
    lista.push_back(new Hijo{});
    lista.push_back(new Nieto{});
    lista.push_back(new Padre{});

    for (Padre *padre : lista) {
        padre->hola();
    }

}