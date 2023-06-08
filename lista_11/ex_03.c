/* 3) Escreva uma função recursiva que calcule a soma dos elementos positivos do vetor de inteiros v[0..n-1].*/
#include <stdio.h>

int somaPositivos(int vetor[15], int tamanho, int i);
int soma =0;

int main () {
    
    int vetor[15] = {52, -1, 79, -100, 3, 91, 45, -5, 9, 36, 0, 8, 57, 68, 95};
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    //printf("%d", tam);
    printf("%d", somaPositivos(vetor, tam, 0));
}

int somaPositivos(int vetor[15], int tamanho, int i) {
    if (i == tamanho)
        return soma;
    if (vetor[i] >= 0)
        soma += vetor[i];
    return somaPositivos(vetor, tamanho, i + 1);
}