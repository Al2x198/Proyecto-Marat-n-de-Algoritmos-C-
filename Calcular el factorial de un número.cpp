#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        factorial *= i;

    cout << "Factorial = " << factorial;

    return 0;
}
