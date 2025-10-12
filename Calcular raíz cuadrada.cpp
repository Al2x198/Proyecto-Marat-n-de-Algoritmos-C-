#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n >= 0)
        cout << "Raiz cuadrada = " << sqrt(n);
    else
        cout << "No existe raiz real para numeros negativos.";

    return 0;
}
