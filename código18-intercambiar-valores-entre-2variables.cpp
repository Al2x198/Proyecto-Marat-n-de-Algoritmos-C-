#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;

    // Intercambio
    temp = a;
    a = b;
    b = temp;

    cout << "Después del intercambio:" << endl;
    cout << "A = " << a << ", B = " << b << endl;

    return 0;
}