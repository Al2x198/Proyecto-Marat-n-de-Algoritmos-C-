#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; long long p=1,x; for(int i=0;i<n;i++){ cin>>x; p*=x; } cout<<"Producto = "<<p<<endl; return 0; }
