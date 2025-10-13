#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (i % 10 == 0)
            contador++;

    cout << "Numeros que terminan en 0: " << contador;

    return 0;
}
