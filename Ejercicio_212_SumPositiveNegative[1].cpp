#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int x, sPos=0, sNeg=0; for(int i=0;i<n;i++){ cin>>x; if(x>0) sPos+=x; else if(x<0) sNeg+=x; } cout<<"Suma positivos = "<<sPos<<" Suma negativos = "<<sNeg<<endl; return 0; }
