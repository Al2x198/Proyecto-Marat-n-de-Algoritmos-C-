#include <iostream>
using namespace std;
#include <string>
int main(){ string s; cout<<"Ingrese texto: "; getline(cin,s); for(int i=s.length()-1;i>=0;i--) cout<<s[i]; cout<<endl; return 0; }
