#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    cout << "Numeros divisibles por 2 y 3 hasta " << n << ": ";
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0 && i % 3 == 0)
            cout << i << " ";

    return 0;
}
