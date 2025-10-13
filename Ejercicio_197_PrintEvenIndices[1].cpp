#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int a[100]; for(int i=0;i<n;i++) cin>>a[i]; cout<<"Elementos en indices pares: "; for(int i=0;i<n;i+=2) cout<<a[i]<<" "; cout<<"\n"; return 0; }
