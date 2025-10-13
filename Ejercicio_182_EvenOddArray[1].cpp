#include <iostream>
using namespace std;
int main(){
    int n; cout<<"Cuantos numeros?: "; cin>>n;
    int x, pares=0, impares=0;
    for(int i=0;i<n;i++){ cin>>x; if(x%2==0) pares++; else impares++; }
    cout<<"Pares: "<<pares<<" Impares: "<<impares<<"\n"; return 0;
}
