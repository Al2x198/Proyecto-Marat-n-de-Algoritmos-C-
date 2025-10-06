#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }

    cout << "Suma de digitos: " << suma;
    return 0;
}
