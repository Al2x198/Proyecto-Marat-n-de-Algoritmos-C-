#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (i % 4 == 0)
            contador++;

    cout << "Cantidad de multiplos de 4 = " << contador;

    return 0;
}
