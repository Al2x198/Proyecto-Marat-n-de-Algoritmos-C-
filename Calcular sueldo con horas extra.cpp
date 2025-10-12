#include <iostream>
using namespace std;

int main() {
    int horas;
    float pagoHora, sueldo;
    cout << "Horas trabajadas: ";
    cin >> horas;
    cout << "Pago por hora: ";
    cin >> pagoHora;

    if (horas <= 40)
        sueldo = horas * pagoHora;
    else
        sueldo = 40 * pagoHora + (horas - 40) * pagoHora * 1.5;

    cout << "Sueldo total: $" << sueldo;

    return 0;
}
