#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (i % 4 == 0 && i % 6 == 0)
            cout << i << " ";

    return 0;
}
