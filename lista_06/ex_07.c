/*Os símbolos do jogo são um círculo, um triângulo e um quadrado, crie um programa 
que desenhe o círculo de 
forma sequencial, e através de loops desenhe o triângulo e o quadrado. Exemplo:*/


#include <stdio.h>

int main() {
    int i=1, j=1, k=1;

    //quadrado
    for (i=1; i<=3; i++) {
        for (j=1 ;j<=5; j++) {
                printf("*");
            }
        printf("\n");
    }


    printf("\n---------------------------\n");

    //tringulo    
    for (i=1; i<=3; i++){
        for (j=1; j<=3-i; j++) {
            printf(" ");
        }
        
        for(k=1; k<=2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n---------------------------\n");

    for (int i = 1; i <= 3; i++) {
            if (i == 2) {
                for (int k = 1; k <= 5; k++) {
                    printf("*");
                }
            } else {
                for (int j = 1; j <= 2 - i; j++) {
                    printf(" ");
                }
                for (int k = 1; k <= 3; k++) {
                    printf("*");
                }
            }
            printf("\n");
        }

        return 0;
}