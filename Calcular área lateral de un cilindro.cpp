#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1416;
    float radio, altura;
    cout << "Ingrese radio y altura: ";
    cin >> radio >> altura;

    cout << "Area lateral = " << 2 * PI * radio * altura;

    return 0;
}
