#include <iostream>
using namespace std;
int main() {
    double a,b; char op;
    cout << "Ingrese: numero operacion numero (ej: 2 + 3): ";
    cin >> a >> op >> b;
    if (op == '+') cout << a + b << endl;
    else if (op == '-') cout << a - b << endl;
    else if (op == '*') cout << a * b << endl;
    else if (op == '/') { if (b!=0) cout << a / b << endl; else cout << "Division por cero\n"; }
    else cout << "Operacion no soportada\n";
    return 0;
}
