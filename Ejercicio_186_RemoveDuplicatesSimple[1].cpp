#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int a[200], m=0; for(int i=0;i<n;i++) cin>>a[i]; for(int i=0;i<n;i++){ bool dup=false; for(int j=0;j<m;j++) if(a[i]==a[j]) {dup=true; break;} if(!dup) a[m++]=a[i]; } cout<<"Sin duplicados: "; for(int i=0;i<m;i++) cout<<a[i]<<" "; cout<<"\n"; return 0; }
