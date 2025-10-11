#include <iostream>
using namespace std;

int main() {
    int n, valor, positivos = 0, negativos = 0, ceros = 0;
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Numero " << i << ": ";
        cin >> valor;

        if (valor > 0) positivos++;
        else if (valor < 0) negativos++;
        else ceros++;
    }

    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros;

    return 0;
}

