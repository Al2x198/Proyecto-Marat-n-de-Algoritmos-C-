#include <iostream>
using namespace std;

int main() {
    float nota;
    cout << "Ingrese la nota (0-100): ";
    cin >> nota;

    if (nota >= 90) cout << "A";
    else if (nota >= 80) cout << "B";
    else if (nota >= 70) cout << "C";
    else if (nota >= 60) cout << "D";
    else cout << "F";

    return 0;
}
