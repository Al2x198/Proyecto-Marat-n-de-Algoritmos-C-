#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n < 0)
        n = -n;

    cout << "Valor absoluto = " << n;

    return 0;
}
