#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; double s=0; int cnt=0,x; for(int i=0;i<n;i++){cin>>x; if(x>0){s+=x; cnt++;}} if(cnt) cout<<"Promedio positivos = "<<s/cnt<<"\n"; else cout<<"No hay positivos\n"; return 0; }
