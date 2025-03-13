/*10) O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do 
distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor 
seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, 
calcular e escrever o custo final ao consumidor.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float custo_fabrica, custo_final;
    float percentual_distribuidor = 0.28;
    float percentual_impostos = 0.45;

    cout << "Digite o custo de fábrica do carro: ";
    cin >> custo_fabrica;

    custo_final = custo_fabrica + (custo_fabrica * percentual_distribuidor) + (custo_fabrica * percentual_impostos);

    cout << fixed << setprecision(2);
    cout << "O custo final do carro ao consumidor é: R$ " << custo_final << endl;

    return 0;
}