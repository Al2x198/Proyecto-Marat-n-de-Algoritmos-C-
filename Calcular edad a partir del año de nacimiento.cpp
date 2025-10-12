#include <iostream>
using namespace std;

int main() {
    int anioNacimiento, anioActual;
    cout << "Ingrese su año de nacimiento: ";
    cin >> anioNacimiento;
    cout << "Ingrese el año actual: ";
    cin >> anioActual;

    cout << "Su edad es: " << anioActual - anioNacimiento << " años.";

    return 0;
}
