#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese los tres lados del triangulo: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Es un triangulo equilatero.";
    else if (a == b || a == c || b == c)
        cout << "Es un triangulo isosceles.";
    else
        cout << "Es un triangulo escaleno.";

    return 0;
}

