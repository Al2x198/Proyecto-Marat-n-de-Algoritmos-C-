#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    long long resultado = 1;

    cout << "Ingrese base y exponente: ";
    cin >> base >> exponente;

    for (int i = 1; i <= exponente; i++)
        resultado *= base;

    cout << base << "^" << exponente << " = " << resultado;

    return 0;
}



