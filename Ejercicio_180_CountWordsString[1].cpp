#include <iostream>
#include <sstream>
using namespace std;
int main(){ string line; cout<<"Ingrese linea: "; getline(cin,line); istringstream iss(line); string w; int c=0; while(iss>>w) c++; cout<<"Palabras = "<<c<<"\n"; return 0; }
