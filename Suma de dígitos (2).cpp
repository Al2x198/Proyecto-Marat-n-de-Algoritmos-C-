#include <iostream>
using namespace std;

int main() {
    int n, original, invertido = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    original = n;

    while (n != 0) {
        invertido = invertido*10 + n%10;
        n /= 10;
    }

    if (original == invertido) cout << "Es palindromo.";
    else cout << "No es palindromo.";

    return 0;
}
