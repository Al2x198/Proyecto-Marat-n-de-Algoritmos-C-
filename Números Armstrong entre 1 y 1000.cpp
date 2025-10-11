#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, dig, suma;

    cout << "Numeros Armstrong entre 1 y 1000:\n";
    for (num = 1; num <= 1000; num++) {
        temp = num;
        suma = 0;
        while (temp > 0) {
            dig = temp % 10;
            suma += pow(dig, 3);
            temp /= 10;
        }
        if (suma == num)
            cout << num << " ";
    }

    return 0;
}
