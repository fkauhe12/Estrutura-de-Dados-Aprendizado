/*6) Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a 
área do retângulo.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float base, altura;

    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    cout << fixed << setprecision(2);
    cout << "A area do retangulo é: " << base * altura << endl;
    return 0;
}