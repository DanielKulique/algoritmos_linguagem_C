/*O “povo da areia” é um grupo nômade que vende robôs sucata encontrados no deserto de Tatooine, 
eles precisam calcular se vale mais a pena vender um android ou desmontá-lo pelas suas peças. 
Faça um procedimento que leia uma quantidade especificada pelo usuário de valores de peças 
e retorne a soma total, crie então outra função que toma como parâmetro o valor do robô e o valor 
total das peças, então escreva qual a opção mais vantajosa, “vender” ou “desmontar”.*/


#include <stdio.h>


float soma_pecas(float quantidade);
void verificacao(float total_pecas, float total_inteiro);

int main() {
    int quant=0;
    float total_unitario=0, tot_inteiro=0;
    printf("\nQuantidade de pecas que sera vendidas por unidade? ");
    scanf("%d", &quant);
    printf("\nQuantidade de creditos que a peca inteira ira render? ");
    scanf("%f", &tot_inteiro);
    total_unitario = soma_pecas(quant);
    verificacao(total_unitario, tot_inteiro);
    return 0;
}

float soma_pecas(float quantidade){
    float somatoria=0, credito=0;
    int i=1;
    //loop
    for(; i<=quantidade; i++) {
        printf("\nCreditos da unidade [%d]", i);
        scanf("%f", &credito);
        somatoria += credito;
    }
    return somatoria;
}
void verificacao(float total_pecas, float total_inteiro) {
    if (total_pecas == total_inteiro) {
        printf("\nO valor total da venda sera igual!");
    }
    else if(total_pecas > total_inteiro) {
        printf("\nA venda unitaria das pecas dara mais lucro!");
    }
    else {
        printf("\nA venda inteira e unica do robo ira trazer mais lucro!");
    }
}