/*5) Crie um programa pergunta ao usuário o que ele calcular, com as seguintes opções:
a) Área do quadrado - L²
b) Área da superfície do cubo - 6L²
c) Área da superfície do tesseract - 8L³
Leia também o valor do lado L.*/

#include <stdio.h>

int main() {
    float lado, resultado;
    char escolha[5];
    printf("\nO que deseja calcular?\n Q - Area do quadrado\n C - Area da superficie do cubo\n T - Area da superficie do tesseract\n ");
    do {
        printf("ESCOLHA: ");
        scanf(" %c", &escolha[0]);
    }while (escolha[0] != 'Q' && escolha[0] != 'C' && escolha[0] != 'T');
    printf("Qual o valor do lado em metros? ");
    scanf("%f", &lado);

    if(escolha[0] == 'Q') {
        resultado = lado * lado;
        printf("O resultado e %.2f ao quadrado", resultado);
    }
    else if(escolha[0] == 'C') {
        resultado = 6*(lado*lado);
        printf("O resultado e %.2f ao quadrado", resultado);
    }
    else if(escolha[0] == 'T') {
        resultado = 8*(lado*lado*lado);
        printf("O resultado e %.2f ao cubo", resultado);
    }
    return 0;
}