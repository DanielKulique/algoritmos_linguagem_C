/*O laboratório de Hawkins fez uma pesquisa com 100 de seus funcionários, coletando
dados sobre o salário e número de filhos. A empresa deseja saber: a média salarial destes
funcionários; a média do número de filhos; e o percentual de pessoas com salário de até
$500,00, que p
ssuem filhos.*/

#include <stdio.h>
#define func 100 //quantidade de funcionarios

int main() {
    int i, filhos=0, filhos_totais=0;
    float salario, media_salarial, pagamento_total, baixa_renda = 0, porcentual;

    for(i=1; i <= func; i++) {  
        printf("\n=================|FUNCIONARIO [%d]|=================", i);
        printf("\nQuantidade de filhos do funcionario:");
        scanf("%d", &filhos);
        printf("\nDigite Salalario: ");
        scanf("%f", &salario);
        pagamento_total += salario;
        filhos_totais += filhos;
        if (filhos > 0) {
            if (salario <= 500) {
                baixa_renda += 1;
            }
        }
    }
    media_salarial = pagamento_total/func;
    printf("\nR$%.2f", media_salarial);
    printf("\nMedia de filhos: %d", filhos_totais/func);
    
    //calculo porcentual baixa renda
    porcentual = (baixa_renda*100)/func;
    printf("\nPorcentagem de pessoas com filhos e salario < R$500: %.2f", porcentual);
    return 0;
} 