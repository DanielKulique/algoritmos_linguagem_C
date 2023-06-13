/* . Fac¸a um programa para determinar a proxima jogada em um Jogo da Velha. Assumir que ´
o tabuleiro e representado por uma matriz de 3 x 3, onde cada posic¸ ´ ao representa uma ˜
das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando
respectivamente uma casa contendo uma pec¸a minha (-1), uma casa vazia do tabuleiro
(0), e uma casa contendo uma pec¸a do meu oponente (1).
Exemplo:
-1*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define lin 3
#define col 3

void iniciaTabuleiro(int tabuleiro[][3]);
void imprimeTabuleiro(int tabuleiro[][3]);
void jogadaPlayer(int tabuleiro[][3]);
void jogadaPc(int tabuleiro[0][3]);
void verificaSituacao(int tabuleiro[0][3]);

int main() {
    int matriz[3][3];
    iniciaTabuleiro(matriz);
    imprimeTabuleiro(matriz);
    do {
    jogadaPlayer(matriz);
    jogadaPc(matriz);
    printf("\n");
    printf("Verifica: \n");
    verificaSituacao(matriz);
    imprimeTabuleiro(matriz);
    } while (true);
}

void iniciaTabuleiro(int tabuleiro[][3]) {
    int i=0, j=0;
    for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {
            tabuleiro[i][j] = -1;
        }
    }
}
void imprimeTabuleiro(int tabuleiro[][3]) {
    int i=0, j=0;
    for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void jogadaPlayer(int tabuleiro[][3]) {
    int x=0, y=0, i=0, j=0;
    printf("\nJOGADA:");
    printf("\nDigite a posicao x(linha) da tabela: ");
    scanf("%d", &x);
    printf("\nDigite a posicao y(coluna) da tabela: ");
    scanf("%d", &y);
    for (i=0; i<lin; i++) {
        for (j=0;j<col;j++) {
            if (x == i && y == j){
                tabuleiro[i][j] = 1;
            }
        }
    }
}
void jogadaPc(int tabuleiro[0][3]) {
    int para=0;
    srand(time(NULL));
    do {
        int x = rand() % 3;
        int y = rand() % 3;
        if (tabuleiro[x][y] == -1) {
            tabuleiro[x][y] = 0;
            para = 1;
        }
    } while(para != 1);
}

void verificaSituacao(int tabuleiro[0][3]) {
    int i=0, j=0, p=1;
    for (i=0; i<lin; i++) {
        if (tabuleiro[i][0] == 1 && tabuleiro[i][1] == 1 && tabuleiro[i][2] == 1){
            printf("\nJogador ganhou\n");
            return;
        }
        if (tabuleiro[i][0] == 0 && tabuleiro[i][1] == 0 && tabuleiro[i][2] == 0){
            printf("\nMaquina ganhou!\n");
            return;
        }
    }
    for (j=0; j<col; j++) {
        if (tabuleiro[0][j] == 1 && tabuleiro[1][j] == 1 && tabuleiro[2][j] == 1){
            printf("\nJogador ganhou\n");
            return;
        }
        if (tabuleiro[0][j] == 0 && tabuleiro[1][j] == 0 && tabuleiro[2][j] == 0){
            printf("\nMaquina ganhou!\n");
            return;
        }
    }
    if (tabuleiro[0][0] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][2] == 1) {
        printf("\nJogador ganhou!\n");
    }
    if (tabuleiro[0][0] == 0 && tabuleiro[1][1] == 0 && tabuleiro[2][2] == 0) {
        printf("\nMaquina ganhou!\n");
    }

}

