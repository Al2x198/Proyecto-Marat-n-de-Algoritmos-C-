#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n; cout << "Cuantos numeros?: "; cin >> n;
    int x, mx = numeric_limits<int>::min();
    for(int i=0;i<n;i++){ cin>>x; if(x>mx) mx=x; }
    cout << "Maximo = " << mx << endl;
    return 0;
}
