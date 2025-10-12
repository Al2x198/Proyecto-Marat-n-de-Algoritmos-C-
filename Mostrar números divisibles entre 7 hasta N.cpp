#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    cout << "Multiplos de 7 hasta " << n << ": ";
    for (int i = 7; i <= n; i += 7)
        cout << i << " ";

    return 0;
}
