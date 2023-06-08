/* 2) Encontrar o menor elemento de um vetor A com 15 elementos.*/

#include <stdio.h>
int menor = 0; 

int menorElemento(int vetor[15], int tamanho, int i);

int main () {
    int vetor[15] = {52, 17, 79, 64, 3, 91, 45, 28, 9, 36, 83, 12, 57, 68, 95};
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    menorElemento(vetor, tam, 0);
    return 0;
}

int menorElemento(int vetor[15], int tamanho, int i){
    
    if (i == tamanho) {
        printf("\nMenor = %d", menor);
        return 0;
    }
    if (i == 0) {
        menor = vetor[i];
    }
    else {
        if (menor > vetor[i]) {
            menor = vetor[i];
        }
    }
    return menorElemento(vetor, tamanho, i+1);
}