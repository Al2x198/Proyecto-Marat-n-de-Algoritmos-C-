#include <iostream>
using namespace std;

int main() {
    float dolares, tasa;
    cout << "Ingrese cantidad en dolares: ";
    cin >> dolares;
    cout << "Ingrese tasa de cambio (1 dolar = ? euros): ";
    cin >> tasa;

    cout << dolares << " dolares = " << dolares * tasa << " euros";

    return 0;
}
