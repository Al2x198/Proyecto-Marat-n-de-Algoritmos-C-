#include <iostream>
using namespace std;
int main() {
    long long n; cout << "Ingrese un numero: "; cin >> n;
    n = llabs(n);
    while (n >= 10) {
        long long s = 0;
        while (n > 0) { s += n % 10; n /= 10; }
        n = s;
    }
    cout << "Suma final = " << n << endl;
    return 0;
}
