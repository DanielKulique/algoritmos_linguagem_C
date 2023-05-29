//Os dias no Minecraft são de 20 minutos. Crie uma função que, recebendo uma quantidade
//de dias, retorna quantos minutos eles totalizam, então chama outra função que converte de
//minutos para horas e minutos no formato hh:mm, se a quantidade de horas for maior que 24
//converta para dias, horas e minutos.
#include <stdio.h>
#include <stdlib.h>

float minutos(float dias);
float horas(float dias);
float dias_real(float dias);

int main(){
    float dias, resultadoM, resultadoH, resultadoD;
    while (dias <= 0) {
        printf("\nInforme a quantidade de dias jogados: ");
        scanf("%f", &dias);
    }
    resultadoM = minutos(dias);
    printf("\nSe passaram %.2f minutos.", resultadoM);
    resultadoH = horas(dias);
    printf("\nSe passaram %.2f horas.", resultadoH);
    resultadoD = dias_real(dias);
    printf("\nSe passaram %.2f dias.", resultadoD);
}

float minutos(float dias) {
    float resultado;
    resultado = dias * 20;
    return resultado;
}

float horas(float dias) {
    float resultado;
    resultado = ((minutos(dias))/60);
    return resultado;
}

float dias_real(float dias) {
    float resultado;
    resultado = ((horas(dias))/24);
    return resultado;
}
