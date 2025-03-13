/*7) Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade 
dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias. */

#include <iostream>
using namespace std;

int main() {
    int idade_dias, idade_meses, idade_anos;
    
    cout << "Digite a idade em dias: ";
    cin >> idade_dias;
    cout << "Digite a idade em meses: ";
    cin >> idade_meses;
    cout << "Digite a idade em anos: ";
    cin >> idade_anos;
    
    cout << "A idade é: " << idade_anos << " anos, " << idade_meses << " meses e " << idade_dias << " dias." << endl;
    cout << "A idade em dias é: " << idade_anos * 365 + idade_meses * 30 + idade_dias << endl;
    
    return 0;
}
