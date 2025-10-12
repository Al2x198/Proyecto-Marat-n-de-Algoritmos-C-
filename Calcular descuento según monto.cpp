#include <iostream>
using namespace std;

int main() {
    float monto, total;
    cout << "Ingrese el monto de compra: ";
    cin >> monto;

    if (monto > 500) total = monto * 0.9;
    else if (monto > 200) total = monto * 0.95;
    else total = monto;

    cout << "Total a pagar: $" << total;

    return 0;
}
