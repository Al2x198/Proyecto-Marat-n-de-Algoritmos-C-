#include <iostream>
using namespace std;

int main() {
    float num, suma = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Numero " << i << ": ";
        cin >> num;
        suma += num;
    }

    cout << "Promedio = " << suma / 10;

    return 0;
}
