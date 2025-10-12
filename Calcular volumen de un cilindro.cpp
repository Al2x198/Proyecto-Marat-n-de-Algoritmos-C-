#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1416;
    float radio, altura;
    cout << "Ingrese radio y altura: ";
    cin >> radio >> altura;

    cout << "Volumen del cilindro = " << PI * radio * radio * altura;

    return 0;
}
