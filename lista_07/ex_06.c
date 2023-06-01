/*O exército de clones, produzido artificialmente, cresce de forma acelerada a partir de um gene em comum. 
Crie um procedimento que recebe como parâmetro o fator de crescimento de um clone e diga quantos anos 
levará para que o clone atinja idade adulta (18 anos). eg: se o fator de crescimento for de 2 vezes, 
o clone com 9 anos será adulto.*/


#include <stdio.h>

float crescimento(float fator);

int main() {
    float fator_main=0;
    float resultado=0;
    printf("\nDigitar o fator: ");
    scanf("%f", &fator_main);
    resultado = crescimento(fator_main);
    printf("\nA fase adulta do clone sera de [%.0f anos]", resultado);
    return 0;
}

float crescimento(float fator) {
    float anos=0;
    anos = 18/fator;
    return anos;
}