/*Quando Homer estava tentando emagrecer, precisa de um jeito de monitorar seu peso,
crie um programa que recebe sua altura (h) e calcule o peso ideal com base na seguinte
fórmula: Peso ideal = (72.7*h)-58, então leia o peso atual de Homer, se o peso for maior
que o peso ideal, escreva “faltam X kg para atingir o peso ideal), se o peso for menor ou
igual ao peso ideal, escreva “parabens, voce atingiu seu peso ideal*/

#include <stdio.h>

int main() {
    float h, peso_ideal, peso_homer;

    //entradas 
    printf("Peso de Homer[Kg]: ");
    scanf("%f", &peso_homer);
    printf("Altura de Homer[m]: ");
    scanf("%f", &h);
    peso_ideal = (72.7*h)-58;
    //printf("\n%.2f", peso_ideal);
    if (peso_homer <= peso_ideal) {
        printf("Parabens Homer, voce atingiu seu peso ideal");
    }
    else {
        printf("Faltam %.2f Kg", peso_homer-peso_ideal);
    }
    return 0;
}