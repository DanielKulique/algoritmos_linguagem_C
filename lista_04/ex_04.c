/*4) S(n) = 1 + 1/X² + 1/X³ + 1/X4 + … +1/Xn
Sendo “n” um valor informado pelo usuário*/

#include <stdio.h>
#include <math.h>

int main () {
    int i = 0, expoente = 0, denominador = 2; //X=2
    float somatoria = 0;

    printf("Qual o valor de \"n\"?");
    scanf("%d", &expoente);
    for(i = 0; i <= expoente; i++) {
        printf("%d/%d^%d + ", 1, denominador, i);
        somatoria += 1/pow(denominador, i);
    }
    printf("SOMATORIA: %.2f", somatoria);
    return 0;
}