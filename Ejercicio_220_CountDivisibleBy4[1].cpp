#include <iostream>
using namespace std;
int main(){ int n,c=0; cout<<"Ingrese N: "; cin>>n; for(int i=1;i<=n;i++) if(i%4==0) c++; cout<<"Cantidad divisibles por 4 = "<<c<<endl; return 0; }
