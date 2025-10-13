#include <iostream>
using namespace std;
int main() {
    string s; char ch;
    cout << "Ingrese una linea: "; getline(cin, s);
    cout << "Ingrese caracter a contar: "; cin >> ch;
    int cnt = 0;
    for (char c : s) if (c == ch) cnt++;
    cout << "Ocurrencias = " << cnt << endl;
    return 0;
}
