#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    cout << "Multiplos de 9 hasta " << n << ": ";
    for (int i = 9; i <= n; i += 9)
        cout << i << " ";

    return 0;
}
