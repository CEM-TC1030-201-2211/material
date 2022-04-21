#include <iostream>
#include <string>
#include <exception>
using namespace std;

int main() {
    try {
        int x = 5;
        int y = 8;
        if (x == 5) {
            throw invalid_argument("Error de argumento");
        }
    } catch (invalid_argument e) {
        cout << e.what() << endl;
    } catch (exception e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "Algo malo pasó..." << endl;
    }
}