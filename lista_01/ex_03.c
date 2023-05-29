//Uma bomba de neutrinos é capaz de destruir um volume de 10 ua³ (unidades
//astronômicas ao cubo), crie um programa que dado o valor do volume (em ua³) de um local
//do espaço, calcule quantas bombas seriam necessárias para destruí-lo.

#include <stdio.h>
#include <math.h>

int main() {
    int volume = 1;
    float conversao;
    
    //entrada do volume
    printf("-----------------------------------------------------------------------");
    printf("%s", "\nDigite o volume de em unidades astronomicas (ua^3): ");
    scanf("%i", &volume);
    conversao = (float)(volume / 10);
    printf("%s%.2f%s", "Sao necessarias: ", conversao, " bombas para destruir o volume de espaco indicado!");
    printf("\n-----------------------------------------------------------------------");
    return 0;
}