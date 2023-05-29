/*5) Para cada jogador eliminado, o prêmio aumenta em 100.000.000 de wons. 
Escreva um programa que recebe como entrada um número de jogos, a quantidade atual de jogadores, 
e a média da porcentagem de jogadores eliminados por jogo e então prevê quanto será o prêmio após estes jogos.*/

#include <stdio.h>

int main () {
    //declaracao das variaveis
    int i=1, jogos=0, jogadores=0, porcentagem=0, eliminados=0;
    unsigned long long int total=0;

    //entrada de dados
    printf("\nDigite a quantidade de jogos: ");
    scanf("%d", &jogos);
    printf("\nDigite a quantidade de jogadores: ");
    scanf("%d", &jogadores);
    printf("\nPorcentagem de jogadores eliminados por partida: ");
    scanf("%d", &porcentagem);

    for (; i <= jogos; i++) {
        eliminados = jogadores*((float)porcentagem/100);
        jogadores = jogadores - eliminados;
        //printf("\n%d", eliminados);
        total += eliminados;
        //printf("%d", i);
    }
    //printf("%d", jogadores);
    printf("Recompensa acumulada: %llu", total*100000000);
    return 0;
}