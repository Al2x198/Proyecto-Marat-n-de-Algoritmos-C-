#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 11; i <= n; i += 11)
        cout << i << " ";

    return 0;
}
