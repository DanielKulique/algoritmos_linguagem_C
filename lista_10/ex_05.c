/*5) Crie um programa que simula o código fonte da
matrix (imagem), para isso, primeiro ele deve ler
uma matriz M x N de inteiros, então sorteia uma
das M linhas para imprimir por vez.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#define L 20
#define C 20

int main () {
    //declarar variaveis
    int l=0, c=0, coluna=0, e=0;
    int matrix[L][C];
    
    //inicializar randomizaçao
    srand(time(NULL));
    do {
        for (l=0; l<L; l++) {
            for (c=0; c<C; c++){
                matrix[l][c] = rand() % 9;
            }
        }
        for (l=0; l<L; l++) {
            for (c=0; c<C; c++){
                coluna = rand() % 20;
                if ( c == coluna) {
                    for (e=0;e<coluna; e++)
                        printf(" ");
                    printf("%d", matrix[l][c]);
                }
            }
            printf("\n");
        }
        sleep(0.4);
    }while (true);
    return 0;
}
