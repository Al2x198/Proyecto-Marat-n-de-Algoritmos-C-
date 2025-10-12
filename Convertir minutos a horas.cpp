#include <iostream>
using namespace std;

int main() {
    int minutos;
    cout << "Ingrese minutos: ";
    cin >> minutos;

    cout << minutos << " minutos = " << minutos / 60 << " horas y " << minutos % 60 << " minutos.";

    return 0;
}
