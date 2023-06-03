/* 3) Uma turma de 30 alunos fez um teste sobre poções; crie um programa que dadas as
notas (0-10) de cada aluno diga a média da turma e os 3 melhores alunos da turma (notas
mais altas). Caso a nota informada seja inválida (<0 ou >10), não a considere para a média
ou para registrar as maiores notas.*/

#define total 10
#include <stdio.h>

void encontrar_notas(float notas[100], int tamanho);

int main () {
    int i; 
    float nota[100], media;
    for (i=0;i<total; i++){
        do {
            printf("\nDigite a nota do aluno [%d]: ", i+1);
            scanf("%f", &nota[i]);
        }while (nota[i] < 0 || nota[i] > 10);
    }
    //calcula a media
    for (i=0;i<total; i++){
        printf("\n%.2f", nota[i]);
        media += nota[i];
    }
    encontrar_notas(nota, total);
}

void encontrar_notas(float notas[100], int tamanho) {
    float maior1=0, maior2=0, maior3=0;
    int i=0;
    for (i=0; i < tamanho; i++) {
        if (notas[i] > maior1) {
            maior3 = maior2;
            maior2 = maior1;
            maior1 = notas[i];
        }
        else if (notas[i] > maior2) {
            maior3 = maior2;
            maior2 = notas[i];
        }
        else if (notas[i] > maior3) {
            maior3 = notas[i];
        }
    }
    printf("\nPrimeira maior [%f]\nSegunda maior [%f]\nTerceira maior [%f]", maior1, maior2, maior3);
}