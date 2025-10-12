#include <iostream>
using namespace std;

int main() {
    float f;
    cout << "Ingrese temperatura en Fahrenheit: ";
    cin >> f;

    cout << "Equivale a " << (f - 32) * 5 / 9 << " °C";

    return 0;
}
