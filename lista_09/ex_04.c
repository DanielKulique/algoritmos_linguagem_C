/* 4) Em suas férias, Harry recebe muitas cartas de seus amigos, ele lê todas, porém está
ansioso para ver as cartas de seus melhores amigos; “Rony” e “Hermione”. Crie um
programa que lê o nome do remetente de uma carta e verifica se é de um de seus melhores
amigos, se não for, continua procurando (lendo do teclado) em mais cartas, apenas após
encontrar a carta dos dois o programa encerra.*/

#include <stdio.h>
#include <string.h>

int main () {
    int ok=0, i;
    char amigos[2][20] = {"Hermione", "Rony"};
    char remetente[20];
    do {
        printf("\nDigite o nome do remetente: ");
        scanf("%s", remetente);
        for (i=0; i < 2; i++) {
            if (strcmp(remetente, amigos[i])==0) {
                ok ++;
                break;
            }
        }
    }while(ok != 2);
    printf("\nHarry achou as cartas de seus amigos!");
}