#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, contador = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        suma += i;
        contador++;
    }

    if (contador > 0)
        cout << "Promedio pares = " << (float)suma / contador;

    return 0;
}
