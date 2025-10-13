#include <iostream>
using namespace std;
int main(){ int n,s=0; cout<<"Ingrese N: "; cin>>n; for(int i=1;i<=n;i++) if(i%3==0) s+=i; cout<<"Suma divisibles por 3 = "<<s<<endl; return 0; }
