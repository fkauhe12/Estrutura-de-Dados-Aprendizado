/* 
5) Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor. */

#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Digite um valor: ";
    cin >> valor;
    cout << "O antecessor de " << valor << " é " << valor - 1 << endl;
    return 0;
}