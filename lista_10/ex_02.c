
#include <stdio.h>
#include <math.h>

void varermatrix(int matriz[4][4]);

int main () {
    int l=0, c=0;
    int matrix[4][4] = {{0, 0, 0, 2}, 
                        {0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {1, 0, 0, 0}}; 

    for (l=0; l<4; l++) {
        for (c=0; c<4; c++) {
            printf("%d", matrix[l][c]);
            if (matrix[l][c] == 2) {

            }
        }
        printf("\n");
    }
    varermatrix(matrix);
    return 0;
}

void varermatrix(int matriz[4][4]) {
    int l=0, c=0;
    int distancia=0;
    int procurado_x=0, procurado_y=0;
    int agente_x=0, agente_y=0;
    for (l=0; l<4; l++) {
        for (c=0; c<4; c++) {
            //printf("%d", matriz[l][c]);
            if (matriz[l][c] == 2) {
                printf("l2= %d c2= %d", l, c);
                procurado_x = l;
                procurado_y = c;
            }
            if (matriz[l][c] == 1) {
                printf("l1= %d c1= %d", l, c);
                agente_x = l;
                agente_y = c;
            }
        }
        printf("\n");
    }
    distancia = abs(procurado_x-agente_x) + abs(procurado_y-agente_y);
    printf("\nDistancia = %d", distancia);
}
