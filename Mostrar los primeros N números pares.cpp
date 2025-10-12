#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 2; i <= n * 2; i += 2)
        cout << i << " ";

    return 0;
}
