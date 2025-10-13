#include <iostream>
#include <cmath>
using namespace std;
int main(){ int n; cout<<"Ingrese numero: "; cin>>n; int tmp=n, s=0, d, dig=0; while(tmp){ dig++; tmp/=10;} tmp=n; while(tmp){ d=tmp%10; s+=pow(d,dig); tmp/=10;} if(s==n) cout<<"Es Armstrong\n"; else cout<<"No es Armstrong\n"; return 0; }
