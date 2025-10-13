#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int cnt=0,x; for(int i=0;i<n;i++){cin>>x; if(x==0) cnt++;} cout<<"Ceros = "<<cnt<<"\n"; return 0; }
