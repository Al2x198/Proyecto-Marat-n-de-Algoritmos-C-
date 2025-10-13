#include <iostream>
using namespace std;
int main(){ int n,k; cout<<"Ingrese N y K: "; cin>>n>>k; int s=0; for(int i=k;i<=n;i+=k) s+=i; cout<<"Suma multiplos de "<<k<<" = "<<s<<"\n"; return 0; }
