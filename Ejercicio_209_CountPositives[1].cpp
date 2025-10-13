#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int x,pos=0; for(int i=0;i<n;i++){ cin>>x; if(x>0) pos++; } cout<<"Cantidad positivos = "<<pos<<endl; return 0; }
