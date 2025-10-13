#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int x, neg=0; for(int i=0;i<n;i++){ cin>>x; if(x<0) neg++; } cout<<"Cantidad negativos = "<<neg<<endl; return 0; }
