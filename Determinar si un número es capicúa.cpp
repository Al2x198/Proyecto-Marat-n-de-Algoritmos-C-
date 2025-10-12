#include <iostream>
using namespace std;

int main() {
    int n, copia, invertido = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    copia = n;
    while (copia > 0) {
        invertido = invertido * 10 + (copia % 10);
        copia /= 10;
    }

    if (invertido == n)
        cout << "Es capicua";
    else
        cout << "No es capicua";

    return 0;
}
