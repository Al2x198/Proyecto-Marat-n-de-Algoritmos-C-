#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 2; i <= n * 2; i += 2)
        suma += i;

    cout << "Suma = " << suma;

    return 0;
}
