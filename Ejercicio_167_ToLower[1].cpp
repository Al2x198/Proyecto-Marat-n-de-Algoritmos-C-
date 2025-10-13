#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s; cout << "Ingrese una linea: "; getline(cin, s);
    for (char &c : s) c = tolower(c);
    cout << s << endl;
    return 0;
}
