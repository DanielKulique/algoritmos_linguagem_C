/*7) Kryptonita é uma substância conhecida por enfraquecer o Superman, e quanto mais próximo ele está de um 
cristal de kryptonita, maior o efeito de enfraquecimento. Um inimigo da liga da justiça descobriu isso e determinou 
também a fórmula para o cálculo do efeito de enfraquecimento: x = 1/(d²), onde x é um fator multiplicado pela força de 
Superman e d é a distância em metros da kryptonita mais próxima dele. crie um programa que mostra a força que o superman 
tem em função da distância da kryptonita, para isso, use força base = 100, e distância variando de 0 até 10 metros, de 10 em 10 cm.*/


#include <stdio.h>
#include <stdbool.h>

int main() {
    double distancia = 0, forca_base = 100, x = 0;
    for(;distancia <= 1000; distancia += 10){
        x = 1/(distancia*distancia);
        //printf("\nFATOR X = %f para DISTANCIA = %.0f", x, distancia);
        printf("\n FORCA = %f | DISTANCIA %.0fcm", (x*forca_base), distancia);
    }
    return 0;
}