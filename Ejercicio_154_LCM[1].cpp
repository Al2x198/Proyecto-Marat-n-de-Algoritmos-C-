#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    long long aa = a, bb = b;
    // calcular MCD
    long long x = llabs(aa), y = llabs(bb);
    while (y != 0) { long long t = x % y; x = y; y = t; }
    long long gcd = x;
    if (gcd == 0) cout << "MCM = 0" << endl;
    else cout << "MCM = " << (aa / gcd) * bb << endl;
    return 0;
}
