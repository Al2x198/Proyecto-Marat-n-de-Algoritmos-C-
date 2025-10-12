#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;

    letra = tolower(letra);

    if (!isalpha(letra))
        cout << "No es una letra.";
    else if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
        cout << "Es una vocal.";
    else
        cout << "Es una consonante.";

    return 0;
}
