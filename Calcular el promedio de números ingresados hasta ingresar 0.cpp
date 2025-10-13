#include <iostream>
using namespace std;

int main() {
    float num, suma = 0;
    int contador = 0;

    cout << "Ingrese numeros (0 para terminar):\n";
    do {
        cin >> num;
        if (num != 0) {
            suma += num;
            contador++;
        }
    } while (num != 0);

    if (contador > 0)
        cout << "Promedio = " << suma / contador;
    else
        cout << "No se ingresaron numeros.";

    return 0;
}
