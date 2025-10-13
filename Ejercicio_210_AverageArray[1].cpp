#include <iostream>
using namespace std;
int main(){ int n; cout<<"Cuantos?: "; cin>>n; double s=0,x; for(int i=0;i<n;i++){ cin>>x; s+=x; } cout<<"Promedio = "<<s/n<<endl; return 0; }
