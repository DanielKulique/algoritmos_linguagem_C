/* 7) A taça das casas é dada para a casa que obteve mais pontos em um ano. Crie programa
que em um vetor, armazene os pontos de N alunos e em outro vetor de mesmo tamanho
armazene suas respectivas casas (Grifinória - g; Lufa-Lufa - l; Sonserina - s; Corvinal - c)
em seguida crie uma função para cada casa que recebe como parâmetro ambos os vetores
de alunos e de casas, e um número inteiro (positivo ou negativo) de pontos extras, então
retorne o somatório dos pontos dos alunos daquela casa (os que possuem sua letra)
acrescido do número de pontos extras. Na função principal o usuário deve digitar quantos
alunos deseja informar, em seguida informar o número e a casa de cada um, e por fim
quantos pontos extras cada casa recebeu, imprima o total de pontos de cada casa e qual
ganhou a taça das casas. */


#include <stdio.h>
#include <ctype.h>
#define tam 10

void somarPontos(int ponto[10], char casa[10]);

int main () {
    int i;
    int pontos[10];
    char casas[10];
    printf("\nG-Grifinoria\nL-Lufa-Lufa\nS-Sonserina\nC-Corvinal");
    for (i=0; i<tam; i++){
        printf("\nDigite a casa do aluno [G, L, S, C]: ");
        scanf(" %c", &casas[i]);
        printf("\nDigite o ponto do Aluno da [%c]", casas[i]);
        scanf("%d", &pontos[i]);
    }
    
    printf("\nCasas: ");
    for (i=0; i<tam; i++){
        printf("%c ", casas[i]);
    }
    printf("\nPontos: ");
    for (i=0; i<tam; i++){
        printf("%d ", pontos[i]);
    }
    somarPontos(pontos, casas);
}

void somarPontos(int ponto[10], char casa[10]){
    int i=0, soma_g=0, soma_l=0, soma_s=0, soma_c=0;
    for (i=0; i<10; i++){
        if (toupper(casa[i]) == 'G')
            soma_g += ponto[i];
        else if (toupper(casa[i]) == 'L')
            soma_l += ponto[i];
        else if (toupper(casa[i]) == 'S')
            soma_s += ponto[i];
        else if (toupper(casa[i]) == 'C')
            soma_c += ponto[i];
    }
    printf("\nSoma G [%d]\nSoma L [%d]\nSoma S [%d]\nSoma C [%d]", soma_g, soma_l, soma_s, soma_c);
}
