#include <iostream>
using namespace std;

int main() {
    int n;
    string binario = "";
    cout << "Ingrese un numero decimal: ";
    cin >> n;

    if (n == 0) binario = "0";
    else {
        while (n > 0) {
            binario = char((n % 2) + '0') + binario;
            n /= 2;
        }
    }

    cout << "Binario: " << binario;

    return 0;
}
