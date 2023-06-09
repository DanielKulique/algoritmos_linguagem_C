/* 6) Escreva uma função recursiva eficiente que receba inteiros estritamente positivos k e n e calcule k*n (resolvendo a multiplicação por soma).*/

#include <stdio.h>

int multiplicacaoSoma(int k, int n);
int soma = 0;

int main () {
    int n=1, k=1;
    do {
        printf("\nDigite dois numero [k] e [n] positivos para obter a sua multiplicacao por soma: ");
        scanf("%d %d", &k, &n);
    } while (n < 0 || k < 0);
    printf("%d", multiplicacaoSoma(k, n));
}

int multiplicacaoSoma(int k, int n) {
    if (n==0){
        return 0;
    }
    if (n==1)
        return soma+k;
    else
        soma += k;
    return multiplicacaoSoma(k, n-1);
}
