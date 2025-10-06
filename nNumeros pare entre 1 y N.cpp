#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    cout << "Numeros pares entre 1 y " << N << ": ";
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    return 0;
}
