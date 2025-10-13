#include <iostream>
using namespace std;
int main(){ int n,spar=0,simp=0; cout<<"Ingrese N: "; cin>>n; for(int i=1;i<=n;i++){ if(i%2==0) spar+=i; else simp+=i; } cout<<"Suma pares = "<<spar<<" Suma impares = "<<simp<<endl; return 0; }
