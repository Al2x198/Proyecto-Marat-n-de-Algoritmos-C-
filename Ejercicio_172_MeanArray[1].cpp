#include <iostream>
using namespace std;
int main() {
    int n; cout << "Cuantos numeros?: "; cin >> n;
    double suma=0,x;
    for(int i=0;i<n;i++){ cin>>x; suma+=x; }
    cout << "Promedio = " << suma/n << endl;
    return 0;
}
