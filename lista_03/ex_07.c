/*Crie um programa que seja capaz de descobrir qual dentre os seguintes heróis foi
escolhido através de perguntas e respostas. Heróis possíveis: Capitã Marvel, Homem de
Ferro, Thor, Homem Aranha, Capitão América e Pantera Negra. Utilize a estrutura de
decisão caso e a seguinte classificação:*/

#include <stdio.h>
#include <ctype.h>

int main () {
    char voa[5], sexo[5], humano[5], uniforme[5], teias[5], americano[5];

    printf("\nDescubra qual e o super heroi!");

    printf("\nVOA? [S/N]");
    scanf(" %c", voa);

    if (toupper(voa[0]) == 'S') {
        printf("\nHomem ou mulher? [H/M]");
        scanf(" %c", sexo);
        if (toupper(sexo[0]) == 'M') {
            printf("\nCapita Marvel!");
        }
        else {
            printf("\nE humano?[S/N]");
            scanf(" %c", humano);
            if(toupper(humano[0]) == 'S') {
                printf("\nHomem de Ferro");
            }
            else {
                printf("\nThor");
            }
        }
    }
    else {
        printf("\nUniforme vermelho? [S/N]");
        scanf(" %c", uniforme);
        if(toupper(uniforme[0]) == 'S') {
            printf("\nLanca teias? [S/N]");
            scanf(" %c", teias);
            if(toupper(teias[0]) == 'S') {
                printf("\nHomem Aranha");
            }
            else {
                printf("\nHomem Formiga");
            }
        }
        else {
            printf("\nPersonagem americano?[S/N]");
            scanf(" %c", americano);
            if (toupper(americano[0]) == 'S') {
                printf("\nCapitao America");
            }
            else {
                printf("\nPantera Negra");
            }
        }
    }
    return 0;
}