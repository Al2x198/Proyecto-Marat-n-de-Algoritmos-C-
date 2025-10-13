#include <iostream>
using namespace std;
int main() {
    int n; cout<<"Cuantos numeros?: "; cin>>n;
    int x, pos=0, neg=0, zero=0;
    for(int i=0;i<n;i++){ cin>>x; if(x>0) pos++; else if(x<0) neg++; else zero++; }
    cout<<"Pos: "<<pos<<" Neg: "<<neg<<" Ceros: "<<zero<<endl;
    return 0;
}
