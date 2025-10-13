#include <iostream>
using namespace std;

int main() {
    int n;
    float nota, suma = 0;
    cout << "Ingrese cantidad de notas: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    cout << "Promedio = " << suma / n;

    return 0;
}
