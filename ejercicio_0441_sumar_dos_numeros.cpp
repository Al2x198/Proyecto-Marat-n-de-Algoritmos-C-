// Nombre: ejercicio_0441_sumar_dos_numeros
// Descripción: Lee dos enteros y muestra la suma.
// Ejemplo de entrada: 2 3
#include <iostream>
using namespace std;
int main() {
    long a,b;
    if(!(cin>>a>>b)) return 0;
    cout << (a + b) << '\n';
    return 0;
}
