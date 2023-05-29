/*1) A medida para longas distâncias no espaço é o Parsec, que equivale a 3,25 anos luz. 
Crie um procedimento que recebe como parâmetro uma distância em anos luz, 
e então escreva esta distância em Parsecs.
*/

#include <stdio.h>

float conversao_distancia(float anos_luz);

int main () {
    float distancia=0, resultado=0;
    printf("\nDigite a desejado distancia do espaço: ");
    scanf("%f", &distancia);
    resultado = conversao_distancia(distancia);
    printf("\n[%.2f] Anos luz, equivalem a [%.2f] Parsec", distancia, resultado);
    return 0;
}

float conversao_distancia(float anos_luz) {
    float parsec;
    parsec = anos_luz * 3.25;
    return parsec;
}