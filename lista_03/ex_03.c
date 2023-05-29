/*As Indústrias Stark precisam de um programa para catalogar suas vendas, crie um
programa que recebe o código do produto e a quantidade comprada e calcula o valor total
baseado na tabela abaixo:
Código do produto Preço Unitário
1001 $10.987,50
1324 $1.200.000,00
6548 $775,10
987 $3.143,75
7623 $113.030,99*/

#include <stdio.h>

int main () {
    int codigo;
    float preco;
    char continuar[10];
    do {
        printf("\n 1001 $10.987,50\n 1324 $1.200.000,00\n 6548 $775,10 \n 987 $3.143,75\n 7623 $113.030,99");
        printf("\n Qual o codigo do produto?");
        scanf("%d", &codigo);
        if (codigo != 1001 && codigo != 1324 && codigo != 6548 && codigo != 987 && codigo && 7623) {
            printf("\nProduto nao encontrado!");
        }

        if (codigo == 1001) {
            preco += 10987.50;
        }
        if (codigo == 1324) {
            preco += 1200000;
        }
        if (codigo == 6548) {
            preco += 775.10;
        }
        if (codigo == 987) {
            preco += 3143.75;
        }
        if (codigo == 7623) {
            preco += 113030.99;
        }
        printf("\n==============================================");
        //continuar loop?
        printf("\nDesejada adicionar mais produtos [S/N]?");
        scanf("%s", continuar);
    }while (continuar[0] == 's' || continuar[0] == 'S');
    printf("R$%.2f", preco);
    return 0;
}