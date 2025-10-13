#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 8; i <= n; i += 8)
        suma += i;

    cout << "Suma de multiplos de 8 = " << suma;

    return 0;
}
