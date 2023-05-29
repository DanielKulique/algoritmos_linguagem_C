/*2) A segunda, é composta pela soma dos 10 primeiros termos da série:
            2/500 - 5/450 + 2/400 - 5/350 + …*/

#include <stdio.h>

int main() {
    int i=1, denominador = 500;
    float somatoria = 0;
    for(; i <=10; i++) {
        //printf("%d", i);
        if (i%2 != 0){
            printf("\n + 2/%f", (float)denominador);
            somatoria += 2/(float)denominador;
        }
        else {
            printf("\n - 5/%f", (float)denominador);
            somatoria -= 5/(float)denominador;
        }
        //printf("%d - ", denominador);
        denominador -= 50;
    }
    printf("\nSOMATORIA: %f", somatoria);
    return 0;
}