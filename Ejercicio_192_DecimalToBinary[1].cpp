#include <iostream>
using namespace std;
int main(){ int n; cout<<"Ingrese decimal: "; cin>>n; if(n==0){ cout<<0<<"\n"; return 0;} string s=""; while(n>0){ s = char('0' + (n%2)) + s; n/=2;} cout<<s<<"\n"; return 0; }
