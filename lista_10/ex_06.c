/* 6) Para armazenar a população de cada localização na
Matrix, é usado uma matriz M x M, com M>=3, em que
cada posição armazena a população da área. Crie um
programa que lê o valor de M, e em seguida cada uma
das posições desde a posição (0,0) até a posição (M-1,
M-1), e imprime qual região (norte, sul, leste ou oeste) é
a mais populosa, sendo a matriz dividida sempre em
quartos ignorando as diagonais.*/

#include <stdio.h>
#define m 100
#define n 100

void varrerMatriz(int matriz[m][n], int linha, int coluna);

int main () {
    int i=0, j=0, l=0, c=0;
    int matriz[m][n];
    printf("Digite a quantidade de linha e colunas da matriz: ");
    scanf("%d %d", &l, &c);
    printf("\nl=%d c=%d", l, c);
    printf("\n");
    for (i=0;i<l;i++) {
        for (j=0;j<c;j++) {
            printf("Matriz [%d][%d] recebe: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    /*for (i=0;i<l;i++) {
        for (j=0;j<c;j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n
    }*/
    varrerMatriz(matriz, l, c);
    return 0;
}

void varrerMatriz(int matriz[m][n], int linha, int coluna) {
    int i=0, j=0, k=0;
    int norte=0, sul=0, leste=0, oeste=0;
    //retirar diagonal secundaria;
    for (k=0;k<linha; k++){
        matriz[k][linha-k-1] = -1;
    }

    for (i=0;i<linha;i++) {
        for (j=0;j<coluna;j++) {
            if (j != i && matriz[i][j] != -1) {
                if (i < linha/2)
                    norte += matriz[i][j];
                else if (i > linha/2)
                    sul += matriz[i][j];
                else if (j < linha/2)
                    oeste += matriz[i][j];
                else
                    leste += matriz[i][j];

                printf("%d", matriz[i][j]);
            }
            //printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nNorte= %d\nSul= %d\nOste= %d\nLeste= %d", norte, sul, oeste, leste);
}