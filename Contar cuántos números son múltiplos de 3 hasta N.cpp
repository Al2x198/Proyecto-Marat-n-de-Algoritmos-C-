#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (i % 3 == 0)
            contador++;

    cout << "Multiplos de 3 hasta " << n << ": " << contador;

    return 0;
}
