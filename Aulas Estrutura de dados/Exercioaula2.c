#include <stdio.h>
#include <stdlib.h>

int main(){

    // Criar tres vetores de mesmo tamanho usando alocacao dinamica
    int tamanho = 3;
    
    int *vetor1 = (int *)malloc(tamanho * sizeof(int));
    int *vetor2 = (int *)malloc(tamanho * sizeof(int));
    int *vetor3 = (int *)malloc(tamanho * sizeof(int));
    
    // Preencher dois vetores com valores
    // Vetor 1
    for(int i = 0; i < tamanho; i++){
        vetor1[i] = i;
    }
    
    // Vetor 2
    for(int i = 0; i < tamanho; i++){
        vetor2[i] = i + 1;
    }
    
    // Somar os dois vetores e armazenar no terceiro
    // Vetor 3
    for(int i = 0; i < tamanho; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    
    // Apresentar o vetor resultado
    for(int i = 0; i < tamanho; i++){
        printf("Resultado[%d] = %d\n", i, vetor3[i]);
    }
    
    // Liberar a memória alocada
    free(vetor1);
    free(vetor2);
    free(vetor3);

    return 0;
}

