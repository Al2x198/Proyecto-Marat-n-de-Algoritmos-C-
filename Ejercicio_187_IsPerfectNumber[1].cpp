#include <iostream>
using namespace std;
int main(){ int n; cout<<"Ingrese numero: "; cin>>n; int s=0; for(int i=1;i<n;i++) if(n%i==0) s+=i; if(s==n) cout<<n<<" es perfecto\n"; else cout<<n<<" no es perfecto\n"; return 0; }
