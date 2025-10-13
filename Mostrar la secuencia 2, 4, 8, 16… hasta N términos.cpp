#include <iostream>
using namespace std;

int main() {
    int n, valor = 2;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << valor << " ";
        valor *= 2;
    }

    return 0;
}
