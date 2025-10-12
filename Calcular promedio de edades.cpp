#include <iostream>
using namespace std;

int main() {
    int n, edad, suma = 0;
    cout << "Cuantas personas?: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Edad " << i << ": ";
        cin >> edad;
        suma += edad;
    }

    cout << "Promedio de edad: " << (float)suma / n;

    return 0;
}
