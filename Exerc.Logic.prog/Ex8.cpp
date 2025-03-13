/*8) Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos 
brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total 
de eleitores*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total_eleitores, votos_brancos, votos_nulos, votos_validos;
    
    float percentual_brancos, percentual_nulos, percentual_validos;

    cout << "Digite o número total de eleitores: ";
    cin >> total_eleitores;
    cout << "Digite o número de votos brancos: ";
    cin >> votos_brancos;
    cout << "Digite o número de votos nulos: ";
    cin >> votos_nulos;
    cout << "Digite o número de votos válidos: ";
    cin >> votos_validos;
    

    cout << fixed << setprecision(2);
    percentual_brancos = (votos_brancos * 100) / total_eleitores;
    percentual_nulos = (votos_nulos * 100) / total_eleitores;
    percentual_validos = (votos_validos * 100) / total_eleitores;

    cout << "Percentual de votos brancos: " << percentual_brancos << "%" << endl;
    cout << "Percentual de votos nulos: " << percentual_nulos << "%" << endl;
    cout << "Percentual de votos válidos: " << percentual_validos << "%" << endl;

    return 0;
}