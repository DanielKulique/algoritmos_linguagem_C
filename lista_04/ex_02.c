/*Para a feira de ciências da escola, Dustin vai fazer um programa que calcula diversas séries
numéricas matemáticas; crie um programa para cada uma das seguintes séries:
2) S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50*/

#include <stdio.h>

int main () {
    int numerador = 1, denominador = 1;
    float somatoria;

    for(denominador = 1; denominador <= 50; denominador++) {
        somatoria += (float)numerador/denominador;
        printf("%d/%d + ", numerador, denominador);
        numerador += 2; 
    }
    printf("\nSOMATORIA: %.2f", somatoria);
    return 0;
}