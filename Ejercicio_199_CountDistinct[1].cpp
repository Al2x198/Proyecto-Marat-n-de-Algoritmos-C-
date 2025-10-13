#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int a[200]; for(int i=0;i<n;i++) cin>>a[i]; int distinct=0; for(int i=0;i<n;i++){ bool seen=false; for(int j=0;j<i;j++) if(a[i]==a[j]){seen=true; break;} if(!seen) distinct++; } cout<<"Distinct = "<<distinct<<"\n"; return 0; }
