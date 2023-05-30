/*4) Para quebrar a trava de segurança de uma porta, alguns droids usam um algoritmo de força bruta para 
calcular um somatório cujo resultado é a senha da porta, sendo este o seguinte somatório:*/

/*Onde R(i) = é uma função de de “i”, e “n” e “k” são constantes descobertas pelo droid (entrada) 
e passadas por parâmetro para um procedimento que calcula este somatório e escreve seu resultado. 
Desenvolva este procedimento. OBS: Para calcular R utilize uma função específica que retorna o resultado 
ao procedimento que a chamou.*/

#include <stdio.h> 
#include <math.h>

int calculo_r(int n, int k);

int main() {
    int num=0, kk=0;
    printf("\nDigite o valor de [n]: ");
    scanf("%d", &num);
    printf("\nDigite o valor de [k]: ");
    scanf("%d", &kk);
    printf("%d", calculo_r(num, kk));
    return 0;
}

int calculo_r(int n, int k) {
    float somatoria = 0;
    int i;
    for(i=1; i<=n; i++) {
        somatoria += (1/(sqrt(i)))+k;
    }
    return somatoria;
}
