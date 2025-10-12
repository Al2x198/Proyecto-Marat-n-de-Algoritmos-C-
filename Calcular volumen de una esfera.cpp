#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1416;
    float radio;
    cout << "Ingrese radio: ";
    cin >> radio;

    cout << "Volumen = " << (4.0/3.0) * PI * radio * radio * radio;

    return 0;
}
