/* 1) Crie um programa que recebe do teclado números inteiros até encontrar o número 11,
sendo esta a condição de parada do programa.*/
#include <stdio.h>

int main () {
    int num;
    do {
        printf("\nEscolha um numero: ");
        scanf("%d", &num);
    } while (num != 11);
    printf("%d", num);
    return 0;
}