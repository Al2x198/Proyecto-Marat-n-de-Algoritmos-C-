#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Divisores de " << n << ": ";
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << " ";

    return 0;
}
