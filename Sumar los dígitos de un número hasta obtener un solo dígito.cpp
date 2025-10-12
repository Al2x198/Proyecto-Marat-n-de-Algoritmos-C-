#include <iostream>
using namespace std;

int main() {
    int n, suma;
    cout << "Ingrese un numero: ";
    cin >> n;

    do {
        suma = 0;
        while (n > 0) {
            suma += n % 10;
            n /= 10;
        }
        n = suma;
    } while (n >= 10);

    cout << "Suma final = " << n;

    return 0;
}
