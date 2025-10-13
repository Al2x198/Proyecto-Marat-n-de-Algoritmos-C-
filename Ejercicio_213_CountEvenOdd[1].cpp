#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int x, cEven=0, cOdd=0; for(int i=0;i<n;i++){ cin>>x; if(x%2==0) cEven++; else cOdd++; } cout<<"Pares = "<<cEven<<" Impares = "<<cOdd<<endl; return 0; }
