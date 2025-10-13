#include <iostream>
using namespace std;
int main() {
    long long n; cout << "Ingrese un numero: "; cin >> n;
    if (n == 0) { cout << "Cantidad de digitos = 1\n"; return 0; }
    int cnt = 0; n = llabs(n);
    while (n > 0) { cnt++; n /= 10; }
    cout << "Cantidad de digitos = " << cnt << "\n";
    return 0;
}
