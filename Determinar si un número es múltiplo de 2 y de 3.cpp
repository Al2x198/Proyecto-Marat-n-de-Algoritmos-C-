#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
        cout << "Es multiplo de 2 y de 3";
    else
        cout << "No es multiplo de ambos";

    return 0;
}
