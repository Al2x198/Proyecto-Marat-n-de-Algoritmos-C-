#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero == 0) {
        contador = 1;
    } else {
        int n = abs(numero);  // Asegura que funcione con negativos
        while (n > 0) {
            n /= 10;
            contador++;
        }
    }

    cout << "El número tiene " << contador << " dígito(s)." << endl;

    return 0;
}
