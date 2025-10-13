#include <iostream>
using namespace std;
int main() {
    long long n; cout << "Ingrese un numero: "; cin >> n;
    long long original = n, rev = 0; n = llabs(n);
    while (n > 0) { rev = rev * 10 + (n % 10); n /= 10; }
    if (original < 0) cout << "-" << rev << endl; else cout << rev << endl;
    return 0;
}
