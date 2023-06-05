/* 8) A professora Sprout de Herbologia possui uma horta com 10 fileiras de N mandrágoras
cada. Crie um programa que lê quantas mandrágoras há em cada fileira, então crie
procedimentos para as seguintes funcionalidades: Imprime número de mandrágoras por
fileira; Colhe 1 mandrágora de cada fila; Colhe 1 mandrágora de cada fila se o número de
mandrágoras for ímpar. Planta 2 mandrágoras nas fileiras em que número for divisível por 7;
Colhe todas as mandrágoras; planta X mandrágoras por fileira; Planta X mandrágoras em
uma determinada fileira. Crie um menu para que o usuário escolha qual procedimento quer
executar; e após qualquer procedimento execute também o procedimento que imprime o
número de mandrágoras por fileira.*/

#include <stdio.h>
#include <stdbool.h>

void imprimir(int vetor[10]);
void colher1(int vetor[10]);
void colher1_se_impar(int vetor[10]);
void planta2_se_div_7(int vetor[10]);
void plantar_x_man(int vetor[10]); //plantar x mandragoras
void plantar_x_det(int vetor[10]); //plantar x mandragoras em determinada fileira
void menu(int vetor[10]);


int main () {
    int i;
    int mandragoras[10];
    for (i=0;i<10; i++) {
        printf("Quantas mandragoras tem na fileira [%d]? ", i+1);
        scanf("%d", &mandragoras[i]);
    }
    menu(mandragoras);
    return 0;
}

void menu(int vetor[10]){
    int opcao=0, parar=1;
    do {
        do {
            printf("\n[1] Imprimir\n[2] colher 1 por fileira\n[3] colher1 se mandragoras da fileira for impar");
            printf("\n[4] Plantar 2 mandragoras se total for divisivel por 7\n[5] Plantar x mandragoras\n[6] Plantar x mandragoras em x filera\n");
            scanf("%d", &opcao);
        }while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6);

        if (opcao==1) {
            imprimir(vetor);
        }
        else if (opcao==2) {
            colher1(vetor);
        }
        else if (opcao==3) {
            colher1_se_impar(vetor);
        }
        else if (opcao==4) {
            planta2_se_div_7(vetor);
        }
        else if (opcao==5) {
            plantar_x_man(vetor);
        }
        else if (opcao==6) {
            plantar_x_det(vetor);
        }
        printf("\nDeseja sair do programa? [0]: ");
        scanf("%d", &parar);
        if (parar==0)
            break;
    }while (true);
}

void imprimir(int vetor[10]){
    int i;
    printf("-----------------------------------------------");
    for (i=0;i<10; i++) {
        printf("\nFileira %d = %d",i+1, vetor[i]);
    }
}
void colher1(int vetor[10]){
    int i;
    printf("\ncolhendo 1 mandragora de cada fileira...");
    for (i=0;i<10; i++) {
        vetor[i] = vetor[i] - 1;
    }
}
void colher1_se_impar(int vetor[10]) {
    int i;
    printf("\ncolhendo 1 mandragora de cada fileira se tiver numero impar de plantas...");
    for (i=0;i<10; i++) {
        if(vetor[i] % 2 != 0) {
            vetor[i] = vetor[i] - 1;
        }
    }
}
void planta2_se_div_7(int vetor[10]) {
    int i;
    printf("\nPlantando 2 mandrágoras nas fileiras em que número for divisível por 7...");
    for (i=0;i<10; i++) {
        if(vetor[i] % 7 == 0) {
            vetor[i] = vetor[i] + 2;
        }
    }
}
void plantar_x_man(int vetor[10]) {
    int i, x;
    printf("\nQuantas mandragoras deseja plantar por fileira? ");
    scanf("%d", &x);
    for (i=0;i<10; i++) {
            vetor[i] = vetor[i] + x;
    }  
}
void plantar_x_det(int vetor[10]) {
    int i, x, f;
    printf("Em qual fileira deseja plantar?");
    scanf("%d", &f);
    printf("\nQuantas mandragoras deseja plantar na fileira [%d]? ", f);
    scanf("%d", &x);
    for (i=0;i<10; i++) {
        if((f-1)==i){ //fileira == indice do vetor(posicao)
            vetor[i] = vetor[i] + x;
        }
    }  
}