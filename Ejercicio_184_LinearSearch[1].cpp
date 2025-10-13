#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int x; int a[100]; for(int i=0;i<n;i++) cin>>a[i]; cout<<"Buscar: "; cin>>x; for(int i=0;i<n;i++) if(a[i]==x){ cout<<"Encontrado en "<<i<<"\n"; return 0;} cout<<"No encontrado\n"; return 0;}
