#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a % b == 0)
        cout << a << " es multiplo de " << b;
    else
        cout << a << " no es multiplo de " << b;

    return 0;
}
