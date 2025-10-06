#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            contador++;
    }

    if (contador == 2)
        cout << n << " es primo";
    else
        cout << n << " no es primo";
    return 0;
}
