#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (i % 5 == 0 && i % 7 == 0)
            contador++;

    cout << "Cantidad = " << contador;

    return 0;
}
