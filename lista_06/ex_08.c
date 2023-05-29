/*8) Suponha que em um jogo, os “n” jogadores tenham que se separar em equipes iguais de “k” jogadores, 
(ignora-se jogadores que sobrarem). Codifique um programa que, para cada um dos 5 jogos: leia o número “k” 
de jogadores antes deste jogo e a quantidade “n” de jogadores por equipe; calcule quantas equipes diferentes 
podem ser formadas, repetindo o cálculo para cada jogo. Para o cálculo das saídas, lembre que cada um é uma 
combinação de “n” jogadores, tomados de “k” em “k”, sendo dado pela fórmula:*/

#include <stdio.h>

int fatorial(int num);

int main() {
    int i=1, n=0, k=0, fat=0, sub=0;
    float conta=0;

    for(i; i<=2; i++) {
        printf("\n'n' jogadores: ");
        scanf("%d", &n);
        printf("\n'k' jogadores: ");
        scanf("%d", &k);
        //printf("\nFATORIAL: %d", fatorial(n));
        sub = n - k;
        conta = (float)fatorial(n)/(fatorial(k)*(fatorial(sub)));
        printf("\nRESULTADO: %.0f", conta);
    }
}

int fatorial(int num){
    int i=1, fat=1;
    for (i=1; i<=num; i++){
        fat = fat*i; 
    }
    return fat;
}