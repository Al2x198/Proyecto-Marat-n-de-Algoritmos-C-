#include <iostream>
using namespace std;
int main() {
    int n; cout << "Cuantos numeros?: "; cin >> n;
    int suma=0, x;
    for(int i=0;i<n;i++){ cin>>x; suma+=x; }
    cout << "Suma = " << suma << endl;
    return 0;
}
