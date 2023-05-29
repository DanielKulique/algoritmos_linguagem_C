/*Para participar de uma viagem da escola, não pode reprovar, considere 3 provas P1, P2
e P3, crie um programa que lê as 3 notas, calcula a média ponderada entre as três notas,
com a seguinte fórmula:
.
Sendo a tabela de notas a seguinte:
● MP >=9 → A
● MP >=8 e MP<9 → B
● MP >=7 e MP<8 → C
● MP >=5 e MP<7 → D
● MP <5 → F
(A,B,C → Aprovado / D,F → Reprovado)
O programa deve dizer a nota (letra) e se Bart poderá ou não ir na viagem.
*/

#include <stdio.h>

int main(){
    float p1, p2, p3, media=5;
    char letra[100];
    printf("Digite a nota 1: ");
    scanf("%f", &p1);
    printf("Digite a nota 2: ");
    scanf("%f", &p2);    
    printf("Digite a nota 3: ");
    scanf("%f", &p3);
    media = (p1*3 + p2*3 + p3 * 4)/10;
    printf("%.2f\n", media);
    printf("===============================\n");


    if (media >= 9){
        letra[0] = 'A';
    }
    else if (media >=8){
        letra[0] = 'B';
    }
    else if (media >=7){
        letra[0] = 'C';
    }
    else if (media >=5){
        letra[0] = 'D';
    }
    else {
        letra[3] = 'F';
    }
    if (letra[0] == 'A' || letra[0] == 'B' || letra[0] == 'C'){
        printf("NOTA: %c", letra[0]);
        printf("\nAPROVADO");
    }
    else {
        printf("NOTA: %c", letra[0]);
        printf("\nREPROVADO");
    }
    return 0;
}   