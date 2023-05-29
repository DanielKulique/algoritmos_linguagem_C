/*Os organizadores precisam saber a porcentagem de homens e mulheres nos jogos. 
Faça um programa que, dado o número de jogadores, leia se o jogador é do sexo masculino ou feminino (m ou f);
ao fim, informe a porcentagem de homens e de mulheres.*/

#include <stdio.h>
#include <ctype.h>

int main () {
    //declaracao de variaveis
    int i=1, jogadores=0, cont_mulher=0, cont_homem=0;
    char sexo;

    //entrada de dados iniciais
    printf("\nQuantos jogadores?"); 
    scanf("%d", &jogadores);

    //loop de repeticao
    for(; i<=jogadores; i++) {
        do {
            printf("\nMasculino ou Feminino? [M/F]");
            scanf(" %c", &sexo);
        }while(toupper(sexo) != 'M' && toupper(sexo) != 'F');
        if(toupper(sexo) == 'F') {
            cont_mulher++;
        }
        if(toupper(sexo) == 'M') {
            cont_homem++;
        }
    }
    printf("\nPorcentagem de Mulheres nos jogos [%.2f%%]", ((float)(cont_mulher*100)/jogadores));
    printf("\nPorcentagem de Homens nos jogos [%.2f%%]", ((float)(cont_homem*100)/jogadores));
    return 0;
}