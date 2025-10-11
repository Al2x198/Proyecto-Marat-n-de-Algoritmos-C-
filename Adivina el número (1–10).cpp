#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numero = rand() % 10 + 1;
    int intento;

    cout << "Adivina el numero (1-10): ";
    cin >> intento;

    if (intento == numero)
        cout << "¡Correcto! El numero era " << numero;
    else
        cout << "Incorrecto, el numero era " << numero;

    return 0;
}


