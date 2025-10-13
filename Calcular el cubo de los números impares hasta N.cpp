#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2)
        cout << i << "^3 = " << i * i * i << endl;

    return 0;
}
