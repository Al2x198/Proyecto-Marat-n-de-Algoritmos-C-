#include <iostream>
using namespace std;
int main() {
    int n; cout << "Ingrese un numero: "; cin >> n;
    if (n < 2) { cout << "No es primo\n"; return 0; }
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) { cout << "No es primo\n"; return 0; }
    cout << "Es primo\n"; return 0;
}
