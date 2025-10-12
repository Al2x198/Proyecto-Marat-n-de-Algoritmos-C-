#include <iostream>
using namespace std;

int main() {
    float b1, b2, h;
    cout << "Ingrese base mayor, base menor y altura: ";
    cin >> b1 >> b2 >> h;

    cout << "Area = " << ((b1 + b2) * h) / 2;

    return 0;
}
