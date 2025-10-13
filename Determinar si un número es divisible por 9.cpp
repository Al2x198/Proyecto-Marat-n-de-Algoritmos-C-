#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 9 == 0)
        cout << "Es divisible por 9";
    else
        cout << "No es divisible por 9";

    return 0;
}
