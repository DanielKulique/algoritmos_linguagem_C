/*5) Crie um programa que recebe as notas de 10 alunos em um teste da matéria de Defesa
Contra a Arte das Trevas e armazena-as em um vetor. Crie uma função que recebe este
vetor e separa em dois outros vetores chamados reprovados e aprovados. Para ser
aprovado a nota tem que ser maior ou igual a 6. Por exemplo, se o vetor de notas for [10 | 5
| 6 | 8 | 7.6 | 5 | 9 | 9 | 3 | 4.9], o vetor aprovados será [10 | 6 | 8 | 7.6 | 9 | 9] e o vetor
reprovados será [5 | 5 | 3 | 4.9]*/

#define total 10
#include <stdio.h>
#include <string.h>

void situacaoAlunos(float notas[10], int tamanho);

int main() {
    int i;
    float nota[10];

    //da entrada nas notas
    for (i=0; i<total; i++) {
        do {
            printf("\nDigite a nota do aluno [%d]: ", i+1);
            scanf("%f", &nota[i]);
        }while(nota[i] < 0 || nota[i] > 10);
    }
    situacaoAlunos(nota, total);
}

void situacaoAlunos(float notas[10], int tamanho) {
    int i=0, r=0, a=0;
    float aprovados[10];
    float reprovados[10];
    for (i=0; i<tamanho; i++) {
        if (notas[i] < 6) {
            reprovados[r] = notas[i];
            r++;
        }
        else {
            aprovados[a] = notas[i];
            a++;
        }
    }
    printf("\nAprovados:");
    for (i=0;i < a; i++){
        printf("%.2f - ", aprovados[i]);
    }
    printf("\nReprovados:");
    for (i=0;i < r; i++){
        printf("%.2f - ", reprovados[i]);
    }
}