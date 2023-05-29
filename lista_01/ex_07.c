//Uma das principais moedas do planeta Terra é o dólar, já na maioria dos outros planetas
//é usado o Blemflarck, que equivale a $336,00. Crie um programa que dado um valor em
//dólares converta-o para Blemflarcks

//1 blemflarck == %336 

#include <stdio.h>

float conversao(float dolar);

int main() {
    float resul, quantidade_inicial_dol;
    printf("Quantos dolares deseja converter para Blemflarck?: ");
    scanf("%f", &quantidade_inicial_dol);
    resul = conversao(quantidade_inicial_dol);
    printf("[%2.f] Dolares equivalente a [%.2f] Blemflarck", quantidade_inicial_dol, resul);
    return 0;
}

float conversao(float dolar) {
    float blemflarchs;
    blemflarchs = dolar/336;
    return blemflarchs; 
}





