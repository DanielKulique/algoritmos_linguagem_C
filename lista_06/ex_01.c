/*1) Nos jogos de Round 6, um número de jogadores competem por um grande prêmio em dinheiro, 
os organizadores precisam saber qual a média de idade dos jogadores, quantos idosos há, 
e também qual o mais velho e o mais jovem dos jogadores. crie um programa que receba como entrada:
o número de jogadores, em seguida o número de identificação e idade de cada jogador; 
e como saída diga a média da idade dos jogadores, quantos jogadores são idosos (idade>=60),
o número e a idade do mais velho e o número e a idade do mais jovem. Exemplo de entrada e saída*/

#include <stdio.h>

int main () {
    int i=2, jogadores=1, numero_id=0, idade=0, soma_idade=0, mais_velho=0, mais_novo=0, id_novo=0, id_velho=0, cont_60=0;
    printf("\nDigite o numero de jogadores: ");
    scanf("%d", &jogadores);

    printf("\nJOGADOR [1]");
    printf("\nIdade do jogador:");
    scanf("%d", &idade);
    printf("\nNumero de identificacao: ");
    scanf("%d", &numero_id);
    mais_novo = idade;
    mais_velho = idade;

    for (; i <=jogadores; i++) {
        printf("\nJOGADOR [%d]", i);
        printf("\nNumero de identificacao: ");
        scanf("%d", &numero_id);
        printf("\nIdade do jogador: ");
        scanf("%d", &idade);
        soma_idade += idade;

        //estrutura de verificacao
        if (idade >= mais_velho) {
            mais_velho = idade;
            id_velho = numero_id;
        }
        if (idade <= mais_novo) {
            mais_novo = idade;
            id_novo = numero_id;
        }
        if (idade >= 60) {
            cont_60++;
        }
    }
    printf("\nMedia de idade dos %d jogadores eh [%.0f] anos", jogadores, (float)soma_idade/jogadores);
    printf("\nNOVO: [%d] ID: [%d],\n VELHO: [%d] ID:[%d]", mais_novo, id_novo, mais_velho, id_velho);
    printf("\nJogadores idosos 60+ anos: [%d]", cont_60);
    return 0;
}