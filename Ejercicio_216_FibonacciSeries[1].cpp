#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos terminos?: "; cin>>n; long long a=0,b=1; cout<<a<<" "<<b<<" "; for(int i=3;i<=n;i++){ long long c=a+b; cout<<c<<" "; a=b;b=c;} cout<<endl; return 0; }
