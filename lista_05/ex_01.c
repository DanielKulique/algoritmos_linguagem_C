/*1) A primeira porta tem como senha todos os números múltiplos de 7 entre 100 e 200, e ao fim a soma desses números.*/

#include <stdio.h>

int main () {
    int i = 100, somatoria = 0;
    for (; i <= 200; i++) {
        if (i%7 == 0) {
            printf("%d - ", i);
            somatoria += i;
        }
    }
    printf("\nA SENHA EH: %d", somatoria);
    return 0;
}