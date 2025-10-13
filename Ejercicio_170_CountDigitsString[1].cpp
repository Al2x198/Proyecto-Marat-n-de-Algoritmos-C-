#include <iostream>
using namespace std;
int main() {
    string s; cout << "Ingrese una linea: "; getline(cin,s);
    int cnt = 0;
    for (char c : s) if (isdigit(c)) cnt++;
    cout << "Digitos = " << cnt << endl;
    return 0;
}
