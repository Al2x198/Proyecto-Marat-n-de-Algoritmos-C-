#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; int x; int mx=-2147483648,mn=2147483647; for(int i=0;i<n;i++){ cin>>x; if(x>mx) mx=x; if(x<mn) mn=x; } cout<<"Max = "<<mx<<" Min = "<<mn<<endl; return 0; }
