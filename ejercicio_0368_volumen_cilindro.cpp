// Nombre: ejercicio_0368_volumen_cilindro
// Descripción: Lee un entero no negativo y muestra su factorial (cuidado con overflow).
#include <iostream>
using namespace std;
int main() {
    unsigned long long n;
    if(!(std::cin>>n)) return 0;
    unsigned long long f=1;
    for(unsigned long long i=1;i<=n;i++) f*=i;
    std::cout<<f<<'\n';
    return 0;
}
