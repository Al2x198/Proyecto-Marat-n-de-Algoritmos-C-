#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    for (int i = 3; i <= 50; i += 3)
        suma += i;

    cout << "Suma de multiplos de 3 = " << suma;

    return 0;
}
