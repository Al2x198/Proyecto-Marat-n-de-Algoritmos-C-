#include <iostream>
using namespace std;

int main() {
    int n, invertido = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (n > 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }

    cout << "Numero invertido = " << invertido;

    return 0;
}
