#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponente;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exponente;

    cout << base << "^" << exponente << " = " << pow(base, exponente);

    return 0;
}
