//Encontrar o maior elemento de um vetor A com 15 elementos

#include <stdio.h>
#include <string.h>

int encontrarMaior(int vet[15],int tamanho, int i);
int maior=0;

int main () {
    int vetor[15] = {52, 17, 79, 64, 3, 91, 45, 28, 9, 36, 83, 12, 57, 68, 95};
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    //printf("%d", tam);
    encontrarMaior(vetor, tam, 0);
}

int encontrarMaior(int vet[15], int tamanho, int i) {
    if (i == tamanho) {
        printf("Maior = %d", maior);
        return 0;
    }
    if (i==0)
        maior = vet[i];
    else {
        if (vet[i]> maior) {
            maior = vet[i];
        }
    }
    //printf("%d ", vet[i]);
    return encontrarMaior(vet, tamanho, i + 1);
}
