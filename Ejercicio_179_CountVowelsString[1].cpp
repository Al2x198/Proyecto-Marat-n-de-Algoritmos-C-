#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s; cout<<"Ingrese linea: "; getline(cin,s);
    int cnt=0; for(char c:s){ char l=tolower(c); if(isalpha(l) && (l=='a'||l=='e'||l=='i'||l=='o'||l=='u')) cnt++; }
    cout<<"Vocales = "<<cnt<<"\n"; return 0;
}
