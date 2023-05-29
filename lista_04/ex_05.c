/*5) número de Euler “e” definido pela série S com precisão de n (dada pelo usuário)
*/

#include <stdio.h>

int main () {
    int i = 1, n = 0, fat = 1; 
    double somatoria = 1;//1, pois 1/0! == 1.

    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <=n; i++) {
        printf("%d x ", i);
        fat = fat * i;
        somatoria += 1/(float)fat;
    }
    printf("\nFATORIAL: %d", fat);
    printf("\nSOMATORIA: %f", somatoria);
    return 0;
}