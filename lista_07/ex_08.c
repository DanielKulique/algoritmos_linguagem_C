#include <stdio.h>

float velocidade_final(float aceleracao, float tempo_atm);
float tempo_viagem(float tempo_atm, float distancia, float v_final);
void conv_tempo(float tempo);

int main() {
    float d=0, a=0, t=0, vf=0, tv; 
    printf("\nDigite:");
    printf("\nDistancia entre as orbitas em [Km]: ");
    scanf("%f", &d);
    printf("\nAceleracao da nave [m/s2]: ");
    scanf("%f", &a);
    printf("\nTempo necessario para sair da atmosfera [s]: ");
    scanf("%f", &t);
    vf = velocidade_final(a, t);
    tv = tempo_viagem(t, d, vf);
    printf("%.2f", tv);
    conv_tempo(tv);
    return 0;
}


//criacao das funcoes de calculo
float velocidade_final(float aceleracao, float tempo_atm){
    float Vf=0;
    Vf = 0 + aceleracao * tempo_atm; //formula velocidade final da nave
    return Vf;
}
float tempo_viagem(float tempo_atm, float distancia, float v_final) {
    float distancia_metro=0, tempo=0; //declaracao de variaveis
    distancia_metro = distancia * 1000; //conversao km para metros
    tempo = (float)(tempo_atm + distancia_metro)/v_final; // formula calculo do tempo da viagem
    return tempo;
}
void conv_tempo(float tempo) {
    if (tempo <= 86.400) {
        printf("\n%.2f Horas", tempo / 3600);
    }
    else if (tempo <= 2592000) {
        printf("\n%.2f Dias", tempo / 86400);
    }
    else if (tempo <= 31104000) {
        printf("\n%.2f Meses", tempo / 2592000);
    }
    else {
        printf("%.2f Anos", tempo / 31104000);
    }
}