#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (i % 5 == 0)
            suma += i;

    cout << "Suma de multiplos de 5 = " << suma;

    return 0;
}
