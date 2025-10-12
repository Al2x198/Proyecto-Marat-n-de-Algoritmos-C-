#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1416;
    float radio;
    cout << "Ingrese el radio: ";
    cin >> radio;

    cout << "Perimetro = " << 2 * PI * radio;

    return 0;
}
