#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 15; i <= n; i += 15)
        cout << i << " ";

    return 0;
}
