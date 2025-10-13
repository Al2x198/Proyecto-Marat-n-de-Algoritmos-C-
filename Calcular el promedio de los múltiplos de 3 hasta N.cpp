#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, contador = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 3; i <= n; i += 3) {
        suma += i;
        contador++;
    }

    if (contador > 0)
        cout << "Promedio = " << (float)suma / contador;

    return 0;
}
