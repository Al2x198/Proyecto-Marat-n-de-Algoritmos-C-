#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (i % 2 == 0 && i % 5 == 0)
            contador++;

    cout << "Cantidad de numeros divisibles entre 2 y 5 = " << contador;

    return 0;
}
