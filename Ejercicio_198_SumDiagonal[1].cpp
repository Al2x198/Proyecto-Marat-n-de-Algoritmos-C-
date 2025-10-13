#include <iostream>
using namespace std;
int main(){ int n; cout<<"Ingrese n: "; cin>>n; int a[50][50], s=0; for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j]; for(int i=0;i<n;i++) s+=a[i][i]; cout<<"Suma diagonal = "<<s<<"\n"; return 0; }
