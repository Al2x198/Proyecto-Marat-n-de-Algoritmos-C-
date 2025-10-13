#include <iostream>
#include <cmath>
using namespace std;
int main(){ long long bin; cout<<"Ingrese binario: "; cin>>bin; int decimal=0, i=0; while(bin){ decimal += (bin%10) * (int)pow(2,i); bin/=10; i++; } cout<<"Decimal = "<<decimal<<"\n"; return 0; }
