/*Em aulas extras de programação,
bart sempre esquecia o ponto e
vírgula no final da linha, crie um
programa que leia quantas vezes ele
errou (5,10 ou 15) e escreva na tela
esse mesmo número de vezes a
seguinte frase:*/

#include <stdio.h>

int main () {
    int erros, i;
    printf("Quantos erros bart cometeu?");
    scanf("%d", &erros);
    for (i = 1; i <= erros; i++) {
        printf("\nNao devo esquecer o ponto e virgula no final da linha;");
    }
    return 0;
}