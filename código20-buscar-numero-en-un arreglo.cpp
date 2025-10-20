#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int arreglo[TAM];
    int buscar;
    bool encontrado = false;

    cout << "Ingrese 5 números:" << endl;
    for (int i = 0; i < TAM; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "Ingrese el número a buscar: ";
    cin >> buscar;

    for (int i = 0; i < TAM; ++i) {
        if (arreglo[i] == buscar) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El número " << buscar << " fue encontrado en el arreglo." << endl;
    } else {
        cout << "El número no está en el arreglo." << endl;
    }

    return 0;
}