/* 3) Crie uma matriz 10 x 20 de caracteres (10 strings de 20 caracteres) e então leia 10
nomes, crie um procedimento que recebe como parâmetro esta matriz e procure o nome
“Neo”, caso ele seja encontrado, escreva “O escolhido!”, caso não seja encontrado, escreva
“Nao encontrado...”*/

#define L 10
#define C 20
#include <stdio.h>
#include <string.h>

void procuraNome(char matriz[L][C]);

int main () {
    char matriz[L][C];
    char nomes[L][C];
    int i=0;
    //ler nomes
    for(i=0; i<L; i++) {
    printf("Digite o nome [%d]", i);
    scanf(" %s", nomes[i]);
    }
    //copiar nomes para a matriz
    for (i=0; i<L; i++) {
        strncpy(matriz[i], nomes[i], C);
    }
    procuraNome(matriz);
    return 0;
}

void procuraNome(char matriz[L][C]) {
    int i=0;
    char encontrar[3] = {'N', 'e', 'o'};
    int encontrado = 0;

    for (i=0; i<L; i++) {
        if (strcmp(matriz[i], encontrar) == 0) { //0, pois é o valor retornado quando as strings são iguais.
        encontrado = 1;
        break;
        }
    }
    if (encontrado) 
        printf("\nEncontrado o escolhido!");
    else
        printf("\nNao encontrado.");
}

