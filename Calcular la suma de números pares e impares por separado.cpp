#include <iostream>
using namespace std;

int main() {
    int n, sumaP = 0, sumaI = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) sumaP += i;
        else sumaI += i;
    }

    cout << "Suma pares = " << sumaP << endl;
    cout << "Suma impares = " << sumaI;

    return 0;
}
