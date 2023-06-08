/*4) Escreva uma função recursiva que calcule o produto dos elementos positivos de um vetor de inteiros v[0..n-1].*/

#include <stdio.h>
int produto=1;

int produtoVetor(int vetor[15], int tamanho, int i);

int main () {
    int vetor[15] = {1, 2, 3, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    printf("%d", produtoVetor(vetor, tam, 0));
    return 0;
}

int produtoVetor(int vetor[15], int tamanho, int i) {
    if (i == tamanho){
        return produto;
    }
    if (vetor[i] != 0)
        produto *= vetor[i];
    return (produtoVetor(vetor, tamanho, i+1));
}