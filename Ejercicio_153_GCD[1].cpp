#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    int x = abs(a), y = abs(b);
    while (y != 0) { int t = x % y; x = y; y = t; }
    cout << "MCD = " << x << endl;
    return 0;
}
