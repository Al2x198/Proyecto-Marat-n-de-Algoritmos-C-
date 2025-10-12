#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    cout << "Numeros primos hasta " << n << ":\n";
    for (int i = 2; i <= n; i++) {
        bool primo = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }
        if (primo) cout << i << " ";
    }

    return 0;
}
