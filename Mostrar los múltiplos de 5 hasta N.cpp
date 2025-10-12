#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    cout << "Multiplos de 5 hasta " << n << ": ";
    for (int i = 5; i <= n; i += 5)
        cout << i << " ";

    return 0;
}
