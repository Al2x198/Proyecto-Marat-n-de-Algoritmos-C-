#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s; cout << "Ingrese una linea: "; getline(cin, s);
    int v = 0;
    for (char c : s) { char l = tolower(c); if (l=='a'||l=='e'||l=='i'||l=='o'||l=='u') v++; }
    cout << "Vocales = " << v << endl;
    return 0;
}
