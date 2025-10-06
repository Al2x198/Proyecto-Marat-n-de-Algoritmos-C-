#include <iostream>
using namespace std;

int main() {
    int n, invertido = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }

    cout << "Numero invertido: " << invertido;
    return 0;
}

