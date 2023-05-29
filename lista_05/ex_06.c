/*6) O Flash pode correr até na velocidade da luz (ou mais rápido), 
faça um programa que calcule a distância percorrida em 1 segundo para cada velocidade que ele escolher correr, 
iniciando em 1% da velocidade da luz e avançando de 1 em 1 (1%,2%,...,100%). 
Considere a velocidade da luz como 300000000 de m/s.*/

#include <stdio.h>
#include <stdbool.h>
#define velocidade 300000000

int main(){
    float distancia = 0, porcentagem = 0;
    do {
        printf("\nDigite a porcentagem da velocidade do FLASH [0-PARA]: ");
        scanf("%f", &porcentagem);
        if (porcentagem == 0) {
            break;
        }
        distancia = 300000000*(porcentagem/100);
        printf("DISTANCIA: %.0f metros", distancia);
    }while(true);
    return 0;
}