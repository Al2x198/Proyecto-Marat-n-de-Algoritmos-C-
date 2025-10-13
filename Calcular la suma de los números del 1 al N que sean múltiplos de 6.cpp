#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 6; i <= n; i += 6)
        suma += i;

    cout << "Suma de multiplos de 6 = " << suma;

    return 0;
}
