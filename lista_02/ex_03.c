/*Marge está fazendo compras e chega na sessão de doces, porém como são três
crianças e ela acha melhor evitar qualquer briga, quer apenas doces cujas unidades sejam
divisíveis por três. Crie um programa que lê a quantidade de unidades de 4 produtos e diga
quais são divisíveis por 3.*/

#include <stdio.h>

int main() {
    int produtos, unidades, i;
    printf("Quantidade Produtos:");
    scanf("%d", &produtos);
    for(i=1; i<=produtos; i++){
        printf("\nQuantas unidades o produto %d:", i);
        scanf("%d", &unidades);
        if (unidades%3==0){
            //printf("%d",unidades%3);
            printf("divisivel");
        }
    }
    return 0;
}