#include <iostream>
#include <cctype>
using namespace std;
int main(){ string s; cout<<"Ingrese texto: "; getline(cin,s); int v=0; for(char c:s) if(strchr("aeiouAEIOU",c)) v++; cout<<"Vocales = "<<v<<endl; return 0; }
