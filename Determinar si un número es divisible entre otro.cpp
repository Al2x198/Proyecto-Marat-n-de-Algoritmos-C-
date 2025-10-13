#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (b != 0 && a % b == 0)
        cout << a << " es divisible entre " << b;
    else
        cout << a << " no es divisible entre " << b;

    return 0;
}
