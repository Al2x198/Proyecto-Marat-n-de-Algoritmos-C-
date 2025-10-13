#include <iostream>
using namespace std;
int main(){ int y; cout<<"Ingrese anio: "; cin>>y; if((y%4==0 && y%100!=0)||y%400==0) cout<<"Bisiesto\n"; else cout<<"No bisiesto\n"; return 0; }
