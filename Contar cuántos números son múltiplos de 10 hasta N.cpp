#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 10; i <= n; i += 10)
        contador++;

    cout << "Cantidad de multiplos de 10 = " << contador;

    return 0;
}
