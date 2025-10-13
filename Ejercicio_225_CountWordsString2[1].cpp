#include <iostream>
#include <sstream>
using namespace std;
int main(){ string line; cout<<"Ingrese linea: "; getline(cin,line); istringstream iss(line); string w; int cnt=0; while(iss>>w) cnt++; cout<<"Palabras = "<<cnt<<endl; return 0; }
