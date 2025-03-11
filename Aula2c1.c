// Recebe uma quantidade de valores e apresenta a media desses valores
#include <stdio.h>

int main(){
    
    int qtd_elementos;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &qtd_elementos);
    
    double vetor[qtd_elementos];
    for(int i = 0; i < qtd_elementos; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%lf", &vetor[i]);
    }
    double soma = 0;
    for(int i = 0; i < qtd_elementos; i++){
        soma += vetor[i];
    }
    double media = soma / qtd_elementos;
    printf("Media = %lf\n", media);
    
    return 0;
}

