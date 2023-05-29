/*3) Nos jogos, apenas uma pessoa pode ser o grande vencedor, portanto, no final, 
o número de jogadores é sempre 1. Crie um programa que recebe o número inicial de 
jogadores e a quantidade de jogos. Em seguida leia quantos jogadores foram eliminados 
em cada jogo (exceto no último), então diga quantos jogadores deverão ser eliminados no último jogo.*/


#include <stdio.h>

int main () {
    int i=1, jogadores=0, jogos=0, eliminados=0;

    //entrada de dados
    printf("\nQuantidade de Jogos: ");
    scanf("%d", &jogos);
    printf("\nQuantidade de Jogadores: ");
    scanf("%d", &jogadores);

    //loop 
    for(; i<jogos; i++) {
        printf("\nJOGO [%d]", i);
        printf("\nQuantos Jogadores foram eliminados: ");
        scanf("%d", &eliminados);
        jogadores -= eliminados;
        printf("Jogadores: [%d]", jogadores);
    }
    printf("\nJOGADORES A SEREM ELIMINADOS NO QUINTO JOGOS: [%d]", jogadores-1);
    return 0;
}