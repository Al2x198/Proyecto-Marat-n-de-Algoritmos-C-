#include <iostream>
using namespace std;
int main() {
    int a, b, suma = 0;
    cout << "Ingrese limite inferior y superior: ";
    cin >> a >> b;
    if (a > b) swap(a,b);
    for (int i = a; i <= b; i++) if (i % 2 != 0) suma += i;
    cout << "Suma de impares en el rango = " << suma << endl;
    return 0;
}
