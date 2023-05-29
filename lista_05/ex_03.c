/*3) A senha da terceira porta é a soma dos 50 primeiros termos da série:
            S= 1000/1 – 997/2 + 994/3 -991/4 ...*/

#include <stdio.h>

int main() {
    int numerador = 1000, denominador = 1;
    float somatoria = 0;
    for(; denominador <= 50; denominador++) {
        if (denominador%2 != 0) {
            printf(" + %d/%d", numerador, denominador);
            somatoria += (float)numerador/denominador;
        }
        else {
            printf(" - %d/%d", numerador, denominador);
            somatoria -= (float)numerador/denominador;
        }
        numerador -= 3;
    }
    printf("\nSOMATORIA = %.2f", somatoria);
    return 0;
}