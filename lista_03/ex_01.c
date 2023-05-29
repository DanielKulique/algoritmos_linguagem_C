/*1) Crie um programa para ler a inicial do nome de um herói e escrever na tela o nome
completo: H - Homem Aranha, C - Capitão América, T - Thor, P - Pantera Negra. Faça
também uma mensagem caso a letra seja inválida (herói não está na lista).
*/

#include <stdio.h>

int main () {
    char letra[5];
    printf("\nEscreva letra inicial do nome de seu super heroi: ");
    printf("\nH - Homem Aranha");
    printf("\nC - Capitao America");
    printf("\nT - Thor");
    printf("\nP - Pantera Negra");
    printf("\nESCOLHA: ");
    scanf("%s", letra);
    printf("\n============\n");
    printf("%s", letra);
    if (letra[0] == 'H')
        printf("\nHomem Aranha");
    else if (letra[0] == 'C')
        printf("\nCapitao America");
    else if (letra[0] == 'T')
        printf("\nThor");
    else if (letra[0] == 'P')
        printf("\nPantera Negra");
    else
        printf("\nletra seja inválida, o herói não está na lista!");
    return 0;
}
