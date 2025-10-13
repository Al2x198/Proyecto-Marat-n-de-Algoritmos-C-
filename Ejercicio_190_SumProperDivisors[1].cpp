#include <iostream>
using namespace std;
int main(){ int n; cout<<"Ingrese n: "; cin>>n; int s=0; for(int i=1;i<=n/2;i++) if(n%i==0) s+=i; cout<<"Suma divisores propios = "<<s<<"\n"; return 0; }
