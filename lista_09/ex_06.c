/* 6) O torneio tribruxo é uma competição entre as três maiores escolas de magia da Europa :
Academia de Magia Beauxbatons, Escola de Magia e Bruxaria de Hogwarts e Instituto
Durmstrang, o Cálice de Fogo sorteia um bruxo de cada escola para participar. Crie, para
cada escola, uma função recebe como parâmetro um vetor N alunos (com um valor inteiro
que representa cada aluno) inscritos e retorna o número do aluno sorteado, e como saída,
escreve: Beauxbatons, aluno (número 1); Hogwarts, aluno (número 2); Durmstrang, aluno
(número 3). OBS: Pesquise como gerar um número aleatório de 0 até (N-1) para cada
escola.
*/

#define total 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteadoBeauxbatons(char inscritos[][20]);
void sorteadoHogwarts(char inscritos[][20]);
void sorteadoDurmstrang(char inscritos[][20]);

int main() {
    int i=0;
    char Beauxbatons[3][20];
    char Hogwarts[3][20];
    char Durmstrang[3][20];

    for (i=0; i<total; i++) {
        printf("\nBeauxbatons!");
        printf("\nDigite nome aluno para a posicao [%d]: ", i+1);
        scanf(" %s", Beauxbatons[i]);
    }
    for (i=0; i<total; i++) {
        printf("\nHogwarts!");
        printf("\nDigite nome aluno para a posicao [%d]: ", i+1);
        scanf(" %s", Hogwarts[i]);
    }
    for (i=0; i<total; i++) {
        printf("\nDurmstrang!");
        printf("\nDigite nome aluno para a posicao [%d]: ", i+1);
        scanf(" %s", Durmstrang[i]);
    }
    sorteadoBeauxbatons(Beauxbatons);
    sorteadoHogwarts(Hogwarts);
    sorteadoDurmstrang(Durmstrang);
}

// Semente para inicializar a sequência de números aleatórios

void sorteadoBeauxbatons(char inscritos[][20]) {
    int i=0, s1=0;
    srand(time(NULL)); // Semente para inicializar a sequência de números aleatórios
    s1 = rand() % 2;
    for (i=0; i < 3;i++){
        if (s1==i) {
            printf("\nAluno sorteado Beauxbatons [%s]", inscritos[s1]);
            break;
        }
    }
}
void sorteadoHogwarts(char inscritos[][20]) {
    int i, s2;
    srand(time(NULL));
    s2 = rand() % 2;
    for (i=0; i < 3;i++){
        if (s2==i){
            printf("\nAluno sorteado Hogwarts [%s]", inscritos[s2]);
            break;
        }
    }
}
void sorteadoDurmstrang(char inscritos[][20]) {
    int i, s3;
    srand(time(NULL));
    s3 = rand() % 2;
    for (i=0; i < 3;i++){
        if (s3==i){
            printf("\nAluno sorteado Durmstrang [%s]", inscritos[s3]);
            break;
        }
    }
}