/* 8) Uma matriz M x 4 em que cada uma das M linhas armazena informações de uma pessoa,
sendo na primeira coluna o código, na segunda coluna a altura, na terceira coluna idade e
na quarta coluna peso. Crie funções separadas que recebem esta matriz como parâmetro
para cada um dos seguintes itens:
a) Retorna a média de altura
b) Retorna a média de idade
c) Retorna a média de peso
d) Retorna uma matriz baseada na primeira, porém com os códigos em ordem
crescente.
Utilize a diretiva #define para definir o valor de M*/

#include <stdio.h>
#include <stdlib.h>

#define c 4
int mediaAltura(int matriz[100][c], int linha);
int mediaIdade(int matriz[100][c], int linha);
int mediaPeso(int matriz[100][c], int linha);
void ordenarMatriz(int matriz[100][c], int linha);

int main () {
    int p=0, i=0, j=0;
    int codigo=0, altura=0, idade=0, peso=0;
    printf("\nDeseja armazenar os dados de quantas pessoas? ");
    scanf("%d", &p);
    int matriz[p][c];

    for(i=0; i<p; i++){
        printf("\nDados da Pessoa[%d]", i+1);
        for(j=0; j<c; j++){
            if (j==0) {
                printf("\nDigite o Codigo: ");
                scanf("%d", &codigo);
                matriz[i][j] = codigo;
            }
            else if (j==1) {
                printf("\nDigite a altura: ");
                scanf("%d", &altura);
                matriz[i][j] = altura;
            }
            else if (j==2) {
                printf("\nDigite a idade: ");
                scanf("%d", &idade);
                matriz[i][j] = idade;
            }
            else {
                printf("\nDigite o peso: ");
                scanf("%d", &peso);
                matriz[i][j] = peso;
            }
        }
    }
    printf("\nCodigo | Altura | Idade | Peso\n");
    for(i=0; i<p; i++){
        for(j=0; j<c; j++){
            printf("%d      ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n-------------------------------------------");
    printf("\nMedia Altura = %d", mediaAltura(matriz, p));
    printf("\nMedia Idade = %d", mediaIdade(matriz, p));
    printf("\nMedia Pesoa = %d", mediaPeso(matriz, p));
    ordenarMatriz(matriz, p);
    printf("\n--------------------\nORDERNADA: ");
    printf("\nCodigo | Altura | Idade | Peso\n");
    for(i=0; i<p; i++){
        for(j=0; j<c; j++){
            printf("%d      ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int mediaAltura(int matriz[100][c], int linha) {
    int i=0, j=0, soma=0, media=0;

    for(i=0; i<linha; i++) {
        for (j=0;j<c;j++) {
            if (j==1) {
                soma += matriz[i][j];
            }
        }
    }
    media = soma/linha; //linha = 1 para cada pessoa.
    return media;
}
int mediaIdade(int matriz[100][c], int linha) {
    int i=0, j=0, soma=0, media=0;

    for(i=0; i<linha; i++) {
        for (j=0;j<c;j++) {
            if (j==2) {
                soma += matriz[i][j];
            }
        }
    }
    media = soma/linha; //linha = 1 para cada pessoa.
    return media;
}
int mediaPeso(int matriz[100][c], int linha) {
    int i=0, j=0, soma=0, media=0;

    for(i=0; i<linha; i++) {
        for (j=0;j<c;j++) {
            if (j==3) {
                soma += matriz[i][j];
            }
        }
    }
    media = soma/linha; //linha = 1 para cada pessoa.
    return media;
}
void ordenarMatriz(int matriz[100][c], int linha) {
    int i = 0, j = 0;
    
    for (i = 0; i < linha - 1; i++) {
        int menorCod = i;
        
        // Encontra o índice do menor código na matriz
        for (j = i + 1; j < linha; j++) {
            if (matriz[j][0] < matriz[menorCod][0]) {
                menorCod = j;
            }
        }
        
        // Troca as linhas
        for (j = 0; j < c; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[menorCod][j];
            matriz[menorCod][j] = temp;
        }
    }
}