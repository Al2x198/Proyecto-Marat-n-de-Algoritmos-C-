#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra, invertida = "";

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    // Invertir la palabra
    for (int i = palabra.length() - 1; i >= 0; i--) {
        invertida += palabra[i];
    }

    // Comparar
    if (palabra == invertida) {
        cout << "La palabra es un palíndromo." << endl;
    } else {
        cout << "La palabra no es un palíndromo." << endl;
    }

    return 0;
}