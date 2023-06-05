/* 1) Crie um programa que leia e armazene em uma matriz 2 x 5 uma lista de idades
relacionadas ao código de um ser-humano (código na mesma coluna da idade), e então
encontre o código da pessoa mais velha. */

#include <stdio.h>

int main () {
    int l=0, c=0;
    int codigo, idade;
    int matriz[2][5];

    for (l=0; l<5; l++) {
        for (c=0;c<2;c++) {
            if (c==0){
                printf("Digite o codigo: ");
                scanf("%d", &codigo);
                matriz[c][l] = codigo;
            }
            else {
                printf("Digite a idade: ");
                scanf("%d", &idade);
                matriz[c][l] = idade;
            }
            }
        }
        printf("\n-------------------------\n");
    for (l=0; l<5; l++) {
        for (c=0;c<2;c++) {
            printf(" %d", matriz[c][l]);
        }
        printf("\n");
    }
    return 0;
}

