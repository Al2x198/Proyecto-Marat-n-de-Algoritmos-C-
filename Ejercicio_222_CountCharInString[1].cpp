#include <iostream>
using namespace std;
int main(){ string s; char ch; cout<<"Ingrese texto: "; getline(cin,s); cout<<"Caracter a contar: "; cin>>ch; int cnt=0; for(char c:s) if(c==ch) cnt++; cout<<"Ocurrencias = "<<cnt<<endl; return 0; }
