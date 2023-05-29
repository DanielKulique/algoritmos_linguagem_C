//Crie um programa que calcula o gasto de energia em Km/MW (quilômetros por
//megawatt) da nave espacial de Rick.
//Dados:
//KI = quilômetro inicial
//KF = quilômetro final
//CC = consumo de energia (em megawatts)
//DP = distância percorrida; DP = KF - KI
//GC = gasto de energia (Km/MW); GC = DP/CC

#include <stdio.h>

int main () {
    float KI, KF, CC, DP, GC;
    
    //entrada de dados
    printf("\n-------------------------------------");
    printf("\nDigite o quilometro inicial: ");
    scanf("%f", &KI);
    printf("\nDigite o quilometro final: ");
    scanf("%f", &KF);
    printf("\nDigite o consumo total em (MW): ");
    scanf("%f", &CC);


    //operacoes com os dados
    DP = KF - KI;
    GC = (DP/CC);
    printf("\n-------------------------------------");
    printf("\nKI = %.2f, KF = %.2f, CC = %.2f", KI, KF, CC);
    printf("\nGasto de energia Km/MW: %.2f", GC);
    return 0;
}