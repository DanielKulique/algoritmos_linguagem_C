/* ) O banco de Gringotes armazena o dinheiro da maioria dos bruxos do Reino Unido, e para
contar quantos galeões há no banco, é preciso somar o valor de cada cofre. Crie um
programa que lê o valor de N cofres, então diga o valor total no banco e qual cofre (posição)
possui mais galeões e qual possui menos.*/

#include <stdio.h>

int main() {
    int i, n; 
    float saldo, count_tot, maior, menor;
    //char nome[] = {'F', 'u', 'l', 'a', 'n', 'o', '\0'};
    float cofre[100];
    //printf("\n %s\n", nome);
    printf("Quantos cofres?");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("Informe o saldo do cofre [%d]", i);
        scanf("%f", &saldo);
        cofre[i] = saldo;
        count_tot += cofre[i];
    }
    for (i=0; i<n; i++) {
        //printf(" %.2f\n", cofre[i]);
        if (i==0) {
            menor = cofre[i];
            maior = cofre[i];
        }
        else if (cofre[i] <= menor){
            menor = cofre[i];
        }
        else if (cofre[i] >= maior) {
            maior = cofre[i];
        }
    }
    printf("\nTotal [%.2f] galeoes", count_tot);
    printf("\nMaior conta possui [%.2f] galeoes ", maior);
    printf("\nMenor conta possui [%.2f] galeoes", menor);
}
