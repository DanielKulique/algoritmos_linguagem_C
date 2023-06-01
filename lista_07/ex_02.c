/*2) O radar da Millenium Falcon quebrou, para consertá-lo é necessário um novo código que diz o que é 
cada objeto que o radar detectou. Crie um programa que leia o diâmetro em quilômetros de um objeto, 
e então um procedimento que recebe este diâmetro e diga qual é o objeto:
● “Meteoro ou Asteroide” - se o diâmetro for menor ou igual a 100 km.
● “Lua ou Planeta Anao” - se o diâmetro for maior que 100 km e menor ou igual a 3000 km.
● “Planeta” - se o diâmetro for maior que 3000 km e menor ou igual a 120000 km.
● “Estrela” - se o diâmetro for maior que 120000 km.
● “Estrela da Morte!” - se o diâmetro for exatamente 160km.*/

#include <stdio.h>

void objeto(int diametro);

int main() {
    int diam;
    do {
    printf("\n-----------------------------------------------------------");
    printf("\nDigite o diametro do objeto em Kilometro [0-PARA]: ");
    scanf("%d", &diam);
    objeto(diam);
    }while(diam != 0);
    return 0;
}

void objeto(int diametro) {
    
    printf("\nO objeto identificado eh: ");
    
    //estrutura de verificacao
    if(diametro == 160) {
        printf("Estrela da Morte!");
    }
    else if (diametro <=100) {
        printf("\nMeteoro ou Asteroide!");
    }
    else if(diametro <= 3000) {
        printf("\nLua ou Planeta Anao");
    }
    else if(diametro <= 120000) {
        printf("\nPlaneta");
    }
    else {
        printf("Estrela");
    }
}