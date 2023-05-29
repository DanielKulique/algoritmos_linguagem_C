/*O salário dos trabalhadores da usina nuclear de Springfield são definidos pelo salário
base acrescido de um valor extra de 10% por filho menor que 14 anos quando o cônjuge
não trabalha, e 5% por filho quando o cônjuge trabalha. Crie um programa que pergunta o
salário base, a quantidade de filhos menor que 14 anos e se o cônjuge trabalha ou não (1
para sim, 0 para não).
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    float salario, salario10, salario5, salario_com_adicional;
    int quant_filhos;
    printf("Digite salario: ");
    scanf("%f", &salario);
    printf("Quantos filhos menores de 14 anos? ");
    scanf("%d", &quant_filhos);
    printf("O conjuge trabalha? [S/N] ");
    char trabalho[5];
    do {
        scanf("%s", trabalho);    
        //printf("%s", trabalho);
    }while(trabalho[0] != 's' && trabalho[0] != 'S' && trabalho[0] != 'n' && trabalho[0] != 'N');
    
    if (trabalho[0] == 's' || trabalho[0] == 'S') {
        salario10 = (salario * 0.10);
        salario_com_adicional = (salario10*quant_filhos) + salario;
        printf("%.2f", salario_com_adicional);
    }
    else {
        salario5 = (salario * 0.05);
        salario_com_adicional= (salario5*quant_filhos) + salario;
        printf("%.2f", salario_com_adicional);
    //printf("%s", trabalho);
    }
    return 0;
}