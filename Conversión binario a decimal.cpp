#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long bin;
    int decimal = 0, i = 0;
    cout << "Ingrese un numero binario: ";
    cin >> bin;

    while (bin != 0) {
        int dig = bin % 10;
        decimal += dig * pow(2, i);
        bin /= 10;
        i++;
    }

    cout << "Decimal: " << decimal;

    return 0;
}
