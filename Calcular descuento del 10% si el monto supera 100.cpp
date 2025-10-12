#include <iostream>
using namespace std;

int main() {
    float monto;
    cout << "Ingrese el monto: ";
    cin >> monto;

    if (monto > 100)
        monto *= 0.9;

    cout << "Total a pagar: $" << monto;

    return 0;
}
