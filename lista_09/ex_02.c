/*2) No primeiro dia de aulas, o Chapéu Seletor escolhe as casas de cada aluno novo; entram
em média 150 alunos. Crie um programa que lê para qual casa cada aluno foi e armazene a
letra inicial da casa em um vetor (Grifinória - g; Lufa-Lufa - l; Sonserina - s; Corvinal - c), em
seguida crie uma função que mostra em ordem crescente a quantidade de alunos que foi
para cada casa.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void quantidade_alunos(char aluno[40], int n_turma);

int main () {
    int turma=5, i=0;
    char aluno[40];
    srand(time(NULL));    // Inicializa a semente do gerador de números aleatórios
    for (i=0; i < turma; i++){
        sleep(0.2);
        int num = rand() % 4;     // Gera um número aleatório entre 0 e 3
        if (num == 0) {
            aluno[i] = 'G';
        }
        if (num == 1) {
            aluno[i] = 'L';
        }
        if (num == 2) {
            aluno[i] = 'S';
        }
        if (num == 3) {
            aluno[i] = 'C';
        }
    }
    for (i=0; i < turma; i++){
        printf("\nAluno [%d] = %c", i, aluno[i]);
    }
    quantidade_alunos(aluno, 5);
}

void quantidade_alunos(char aluno[40], int n_turma) {
    int i=0, cont_g=0, cont_s=0, cont_l=0, cont_c=0;
    for (i=0; i < n_turma; i++){
        //printf("\nAluno [%d] = %c", i, aluno[i]);
        if (aluno[i] == 'G') {
            cont_g++;
        }
        else if (aluno[i] == 'L') {
            cont_l++;
        }
        else if (aluno[i] == 'S') {
            cont_s++;
        }
        else {
            cont_c++;
        }
    }
    if (cont_g >= cont_l && cont_g >= cont_s && cont_g >= cont_c)
        printf("\nGrifinoria tem mais alunos. total = [%d]", cont_g);
    else if (cont_l >= cont_g && cont_l >= cont_s && cont_l >= cont_c)
        printf("\nLufa-Lufa tem mais alunos. total = [%d]", cont_l);
    else if (cont_s >= cont_g && cont_s >= cont_l && cont_s >= cont_c)
        printf("\nSonserina tem mais alunos. total = [%d]", cont_s);
    else
        printf("\nCorvinal tem mais alunos. total = [%d]", cont_s);
    //printf("\nG=%d \nL= %d\nS= %d\n C= %d", cont_g, cont_l, cont_s, cont_c);
}

