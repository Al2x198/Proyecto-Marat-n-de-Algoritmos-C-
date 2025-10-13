#include <iostream>
using namespace std;
int main() {
    string s, sub; cout << "Ingrese linea: "; getline(cin,s);
    cout << "Ingrese subcadena: "; getline(cin,sub);
    size_t p = s.find(sub);
    if (p == string::npos) cout << "No encontrada\n"; else cout << "Encontrada en posicion " << p << endl;
    return 0;
}
