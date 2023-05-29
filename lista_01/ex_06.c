//Duas pessoas investem em uma missão de exploração espacial. Crie um programa que
//dados os valores que cada um investiu, distribua proporcionalmente os lucros da missão
//entre eles. O programa deve ler investimento 1, investimento 2 e lucro, e como saída falar
//quanto recebeu o investidor 1 e o investidor 2.

#include <stdio.h>

float lucro1(float invest1, float invest2, float lucro);
float lucro2(float invest1, float invest2, float lucro); 


int main() {
    float i1, i2, lucr;
    float resultado1, resultado2;
    
    //entrada de dados
    printf("\n-----------------------------------");
    printf("\nDigite o investimento 1: ");
    scanf("%f", &i1);
    printf("\nDigite o investimento 2: ");
    scanf("%f", &i2);
    printf("\nLucro total: ");
    scanf("%f", &lucr);
    resultado1 = lucro1(i1, i2, lucr);
    resultado2 = lucro2(i1, i2, lucr);
    printf("Investidor 1 recebera: %.2f \nInvestidor 2 recebera: %.2f", resultado1, resultado2);
    printf("\n-----------------------------------");
    return 0;
}


float lucro1(float invest1, float invest2, float lucro) {
    float porc1, somaT, lucro_1;
    somaT = invest1 + invest2;
    porc1 = ((100*invest1)/somaT)/100;
    lucro_1 = lucro * porc1;
    return lucro_1;
}
float lucro2(float invest1, float invest2, float lucro) {
    float porc2, somaT, lucro_2;
    somaT = invest1 + invest2;
    porc2 = ((100*invest2)/somaT)/100;
    lucro_2 = lucro * porc2;
    return lucro_2;
}
