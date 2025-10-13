#include <iostream>
using namespace std;
int main(){ int n; cout<<"Ingrese N: "; cin>>n; long long a=0,b=1; if(n<=0) cout<<0<<"\n"; else if(n==1) cout<<0<<"\n"; else{ for(int i=2;i<=n;i++){ long long c=a+b; a=b; b=c; } cout<<a<<"\n";} return 0; }
