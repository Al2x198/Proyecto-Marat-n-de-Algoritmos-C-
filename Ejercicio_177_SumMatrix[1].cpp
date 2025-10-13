#include <iostream>
using namespace std;
int main() {
    int r,c; cout<<"Filas y columnas: "; cin>>r>>c;
    int a[50][50], suma=0;
    for(int i=0;i<r;i++) for(int j=0;j<c;j++){ cin>>a[i][j]; suma+=a[i][j]; }
    cout<<"Suma total = "<<suma<<"\n"; return 0;
}
