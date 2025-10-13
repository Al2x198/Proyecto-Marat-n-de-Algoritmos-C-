#include <iostream>
using namespace std;
int main(){ string s; char a,b; cout<<"Ingrese texto: "; getline(cin,s); cout<<"Caracter a reemplazar y nuevo: "; cin>>a>>b; for(char &c:s) if(c==a)c=b; cout<<"Resultado: "<<s<<endl; return 0; }
