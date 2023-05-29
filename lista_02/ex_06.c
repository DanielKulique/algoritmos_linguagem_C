/*Sr. Burns está com problemas com fiscais do governo pois sua usina nuclear polui
demais, o máximo admitido pelo governo é 1 tonelada de resíduos por mês nos rios e 10
toneladas de resíduos enterrados por ano, com isso, crie um programa que dadas a
quantidade em quilogramas de resíduos jogados no rio e a quantidade de resíduos
enterrados, imprima as seguintes mensagens mediante as condições:

● Se a quantidade de resíduos jogados enterrados for maior que o aceitável, porém a
quantidade jogada no rio for menor ou igual a aceitável, imprima “jogar mais
resíduos no rio!”

● Se a quantidade de resíduos jogados no rio for maior que o aceitável, porém a
quantidade enterrada for menor ou igual a aceitável, imprima “enterrar mais
resíduos!”

● Se ambas as quantidades forem aceitáveis imprima “tudo certo!”

● Se ambas estiverem fora do aceitável, imprima “infelizmente teremos que poluir
menos”*/

#include <stdio.h>

int main() {
    float jogados_no_rio, residuos_enterrados;
    printf("Quantas toneladas de residuos foram jogadas nesse mes no rio? "); //max 1 tonelada
    scanf("%f", &jogados_no_rio);
    printf("Quantas toneladas de residuos foram enterradas no ano? "); //max 10
    scanf("%f", &residuos_enterrados);

    if (residuos_enterrados > 10 && jogados_no_rio < 1) {
        printf("jogar mais residuos no rio!");
    }
    else if (jogados_no_rio > 1 && residuos_enterrados < 10) {
        printf("enterrar mais residuos!");
    }
    else if (jogados_no_rio < 1 && residuos_enterrados < 10) {
        printf("Tudo certo!");
    }
    else {
        printf("Teremos que poluir menos!");
    }
    return 0;
}
