/* 
9) Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
Calcular e escrever o valor do novo salário*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float salario_atual, percentual_reajuste, novo_salario;

    cout << "Digite o salário mensal atual do funcionário: ";
    cin >> salario_atual;
    cout << "Digite o percentual de reajuste: ";
    cin >> percentual_reajuste;

    novo_salario = salario_atual + (salario_atual * percentual_reajuste / 100);

    cout << fixed << setprecision(2);
    cout << "O novo salário do funcionário é: R$ " << novo_salario << endl;

    return 0;
}