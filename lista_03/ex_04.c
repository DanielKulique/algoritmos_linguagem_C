/*A agência S.H.I.E.L.D destina seus recursos para ameaças de forma proporcional ao seu
grau, ou seja, quanto maior a ameaça, mais recursos serão destinados. Com isso, se a
ameaça for de nível D = 5% de aumento, nível C = 10%, B = 15%, A = 20% e O (ômega) =
30%. Crie um programa que recebe um valor inicial e a letra que indica o nível da ameaça,
então calcula o valor final.*/

#include <stdio.h>

int main () {
    float valor;
    char nivel[5];
    printf("\nQual e o valor do recurso desejado?");
    scanf("%f", &valor);
    printf("\nQual e nivel da ameaca?");
    printf("\n Nivel O\n Nivel A\n Nivel B\n Nivel C\n Nivel D\n NIVEL:");
    scanf("%s", nivel);

    if (nivel[0] == 'O') {
        valor = (valor*0.3) + valor;
    }
    else if (nivel[0] == 'A') {
        valor = (valor*0.2) + valor;
    }
    else if (nivel[0] == 'B') {
        valor = (valor*0.15) + valor;
    }
    else if (nivel[0] == 'C') {
        valor = (valor*0.1) + valor;
    }
    else if (nivel[0] == 'D') {
        valor = (valor*0.05) + valor;
    }
    else {
        printf("Nivel nao identificado!");
    }
    printf("Valor destinado a ameaca sera R$%.2f", valor);
    return 0;
}