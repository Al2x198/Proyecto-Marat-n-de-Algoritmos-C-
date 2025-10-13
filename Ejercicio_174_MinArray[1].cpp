#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n; cout << "Cuantos numeros?: "; cin >> n;
    int x, mn = numeric_limits<int>::max();
    for(int i=0;i<n;i++){ cin>>x; if(x<mn) mn=x; }
    cout << "Minimo = " << mn << endl;
    return 0;
}
