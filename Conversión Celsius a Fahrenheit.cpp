#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << "Equivale a " << fahrenheit << " °F";

    return 0;
}
