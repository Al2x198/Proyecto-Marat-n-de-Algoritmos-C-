#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n == 0) contador = 1;
    else {
        while (n != 0) {
            n /= 10;
            contador++;
        }
    }

    cout << "Tiene " << contador << " digitos.";
    return 0;
}
