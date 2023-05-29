#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float conversao_horas_min(int horas);

int main() {
    
    //entrada de dados
    int TIh, TIm, TFh, TFm, minutos_primeiro_dia, minutos_tot_dois_dias, minutos_segundo_dia;
    //TIh = tempo inicial de horas; TIm tempo final de horas.... 
    char dia[10];
    double parteDecimal; //para dividir a parte decimal da hora e converter para minutos
    printf("Digite em qual hora se iniciou o jogo? ");
    scanf("%d %d", &TIh, &TIm);
    printf("Digite em qual hora o jogo acabou: ");
    scanf("%d %d", &TFh, &TFm);
    printf("O jogo terminou no mesmo dia?");

    //looping verificação de dia;
    do {
        scanf("%s", dia); 
        //printf("%s", trabalho);
    }while(dia[0] != 's' && dia[0] != 'S' && dia[0] != 'n' && dia[0] != 'N');

    if (dia[0] == 'n' || dia[0] == 'N') {
        if (TIh < TFh) {
            printf("O tempo de 24 horas foi excedido!");
            exit(0);
        }
    }
    //calculo diferença de horas
    printf("\nInicio  [%d:%d]", TIh, TIm);
    printf("\nFim     [%d:%d]", TFh, TFm);

    float min_inicio, min_total_ini;
    min_inicio = conversao_horas_min(TIh);
    min_total_ini = min_inicio + TIm;

    float min_final, min_total_fin;
    min_final = conversao_horas_min(TFh);
    min_total_fin = min_final + TFm;

    double tempo_total;
    double tempo_resto_min;

    if (dia[0] == 'n' || dia[0] == 'N') {
        minutos_primeiro_dia = (1440 - min_total_ini);
        minutos_segundo_dia = (TFh * 60) + TFm;
        minutos_tot_dois_dias = (minutos_primeiro_dia + minutos_segundo_dia);
        tempo_resto_min = (minutos_tot_dois_dias%60);
        tempo_total = (minutos_tot_dois_dias/60);
    }
    else {
         tempo_total = (min_total_fin - min_total_ini)/60;
    }
    //printf("inicio min [%.2f] fim min [%.2f]\n", min_total_ini, min_total_fin);
    printf("\n=====================================");
    if (tempo_total >= 1) {
        printf("\ntempo total = %.0fh", tempo_total);
    }
    else {
        printf("\nTempo total = 0h");
    }
    printf("%.0fmin", tempo_resto_min); 
    return 0;
}
//funções--------------------------------
float conversao_horas_min(int horas){
    int conv;
    conv = horas*60;
    return conv;
}