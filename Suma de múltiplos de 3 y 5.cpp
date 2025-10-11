#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            suma += i;
    }

    cout << "La suma de los multiplos de 3 o 5 hasta " << n << " es " << suma;

    return 0;
}
