/*A liga da justiça possui um sistema interno para avaliar o sucesso de suas missões, podendo elas ser classificadas em notas de 1 a 5 estrelas, sendo:
1 - falha completa
2 - falha
3 - resultado insatisfatório
4 - resultado positivo
5 - resultado melhor do que o esperado
Faça um programa que lê os dados de nome, ano e a nota de 100 missões e imprima
● A quantidade de missões com nota 5
● A diferença percentual entre respostas com notas negativas (1 e 2) e positivas (4 e 5)
● A nota média das missões
● A missão com menor nota
● A primeira missão com nota 5
● A última missão com nota 1
● O ano mais recente com uma missão com nota neutra.*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define missoes 4

int main() {
    int i = 1, nota = 0, cont_5 = 0, cont_1_2 = 0, cont_4_5 = 0, cont_total = 0, cont_notas = 0, menor = 5, primeira_missao_5=0, ultima_missao_nota_1=0;
    float porc_1_2 = 0, porc_4_5 = 0;
    for (; i<=missoes; i++) {
        printf(" 1 - falha completa\n 2 - falha\n 3 - resultado insatisfatorio\n 4 - resultado positivo\n 5 - resultado melhor do que o esperado\n RESPOSTA: ");
        scanf("%d", &nota);

        //estrutura de verificacao das notas
        if (nota == 1) {
            cont_notas += 1;
            ultima_missao_nota_1 = i;
        }
        if (nota == 2) {
            cont_notas += 2;
        }
        if (nota == 3) {
            cont_notas += 3;
        }
        if (nota == 4) {
            cont_notas += 4;
        }
        if (nota == 5){
            if (cont_5 == 0) {
                primeira_missao_5 = i;
            }
            cont_5 ++;
            cont_notas += 5; 
        }
        if (nota == 1 || nota == 2)
            cont_1_2 ++;
        if (nota == 4 || nota == 5)
            cont_4_5 ++;
        cont_total++;
    }
    porc_1_2 = (float)(cont_1_2*100)/cont_total;
    porc_4_5 = (float)(cont_4_5*100)/cont_total;
    
    //printando na tela os resultados
    printf("\nmissoes com nota 5 [%d]", cont_5);
    //printf("\n1-2[%.2f], 4-5[%.2f]", porc_1_2, porc_4_5);
    printf("\nDIFERENCA PORCENTUAL (1 e 2) e (4 e 5): [%d%%]", abs((int)(porc_1_2 - porc_4_5)));
    printf("\nA nota média das missões: [%.0f]", (float)cont_notas/cont_total);
    printf("");
    printf("\nPRIMEIRA MISSAO COM NOTA 5: [%d]", primeira_missao_5);
    printf("\nULTIMA MISSAO COM NOTA 1: [%d]", ultima_missao_nota_1);
    return 0;
}