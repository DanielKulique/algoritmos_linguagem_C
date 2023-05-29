/*Para a feira de ciências da escola, Dustin vai fazer um programa que calcula diversas séries
numéricas matemáticas; crie um programa para cada uma das seguintes séries:
3) S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36 ... - 10/100*/

#include <stdio.h>

int main () {
    int numerador = 1, denominador = 1;
    float somatoria;

    for(numerador = 1; numerador <= 10; numerador++) {
        denominador = (numerador*numerador);
        if (numerador%2==0){
            somatoria += (float)numerador/denominador;
            printf("%d/%d + ", numerador, denominador);
        }
        else {
            somatoria -= (float)numerador/denominador;
            printf("%d/%d - ", numerador, denominador);
        }
    }
    printf ("SOMATORIA: %.3f", somatoria);
    return 0;
}