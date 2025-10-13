#include <iostream>
using namespace std;
int main() {
    long long n; cout << "Ingrese un numero: "; cin >> n;
    n = llabs(n);
    long long s = 0;
    while (n > 0) { s += n % 10; n /= 10; }
    cout << "Suma de digitos = " << s << endl;
    return 0;
}
