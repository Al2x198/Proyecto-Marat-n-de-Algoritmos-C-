#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int a[100], x; for(int i=0;i<n;i++) cin>>a[i]; cout<<"Valor a contar: "; cin>>x; int cnt=0; for(int i=0;i<n;i++) if(a[i]==x) cnt++; cout<<"Ocurrencias = "<<cnt<<"\n"; return 0; }
