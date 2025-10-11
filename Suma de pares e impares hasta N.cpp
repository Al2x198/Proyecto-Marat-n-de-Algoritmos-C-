#include <iostream>
using namespace std;

int main() {
    int n, sumaPares = 0, sumaImpares = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sumaPares += i;
        else
            sumaImpares += i;
    }

    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Suma de impares: " << sumaImpares;

    return 0;
}




