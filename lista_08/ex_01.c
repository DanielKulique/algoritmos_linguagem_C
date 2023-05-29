//Cada item pode ser carregado em pilhas de até 64 itens, e cada baú grande possui 54
//posições para estes itens. Crie uma função que retorne o mínimo de baús necessários para
//armazenar uma quantidade de itens informada pelo usuário.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int bau(float itens);

int main() {
    float guardar_item, resultado;
    printf("\n----------------------------------");
    printf("\nQuantos itens desejada guardar? ");
    scanf("%f", &guardar_item);
    resultado = bau(guardar_item);
    printf("\nSerao necessarios %.2f bau(s)", resultado);
    return 0;
}

int bau(float itens) {
    //1 bau grande equivale a 54 slots x 64 itens = suporte a 3456 itens
    
    //variavel
    float quant_necessaria;

    if (itens <= 0) {
        printf("\nNao sao necessario baus");
        quant_necessaria = 0;
    }
    else {
        quant_necessaria = ceil(itens / 3456);
        printf("%.2f", quant_necessaria);
    }
    return quant_necessaria;
}
