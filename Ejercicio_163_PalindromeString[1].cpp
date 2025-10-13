#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s; cout << "Ingrese una palabra o frase: "; getline(cin,s);
    string t="";
    for(char c:s) if(isalnum(c)) t+=tolower(c);
    string r=t; reverse(r.begin(), r.end());
    if (t==r) cout << "Es palindromo\n"; else cout << "No es palindromo\n";
    return 0;
}
