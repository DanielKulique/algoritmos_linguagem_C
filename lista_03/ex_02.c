/*Crie um programa leia um número correspondente a cada um dos nove reinos para viajar
através de um portal, então o programa deve escrever na tela o mundo escolhido, a partir
da seguinte classificação: 1-Asgard, 2-Midgard, 3-Jotunheim, 4-Vanaheim, 5-Svartalfheim,
6-Nidavellir, 7-Muspelheim, 8-Alfheim, 9-Niflheim.*/

#include <stdio.h>

int main () {
    int escolha;
    char continuar[10];
    printf("Digite um numero, sendo que:\n");
    printf(" 1-Asgard\n 2-Midgard\n 3-Jotunheim\n 4-Vanaheim\n 5-Svartalfheim\n 6-Nidavellir\n 7-Muspelheim\n 8-Alfheim\n 9-Niflheim");

    
    do {
        printf("\nEscolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("\nAsgard");
        }
        else if (escolha == 2) {
            printf("\nMidgard");
        }
        else if (escolha == 3) {
            printf("\nJotunheim");
        }
        else if (escolha == 4) {
            printf("\nVanaheim");
        }
        else if (escolha == 5) {
            printf("\nSvartalfheim");
        }
        else if (escolha == 6) {
            printf("\nNidavellir");
        }
        else if (escolha == 7) {
            printf("\nMuspelheim");
        }
        else if (escolha == 8) {
            printf("\nAlfheim");
        }
        else if (escolha == 9) {
            printf("\nNiflheim");
        }
        else {
            printf("\nReino não identificado!");
        }
        do {
            printf("\nDeseja continuar? [S/N]");
            scanf("%s", continuar); 
        } while(continuar[0] != 's' && continuar[0] != 'S' && continuar[0] != 'n' && continuar[0] != 'N');
    } while(continuar[0] == 's' || continuar[0] == 'S');
    return 0;
}