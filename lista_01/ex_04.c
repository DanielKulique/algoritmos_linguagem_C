//O radar da nave de Rick foi danificado, crie um novo programa para a nave que, medindo
//a circunferência de um planeta calcule seu volume. Lembrando que a circunferência é
//equivalente a 2𝜋R, sendo R a medida do raio, e o volume da esfera é dado por
//V = 4𝜋𝑅³
//3

#include <stdio.h>
#include <math.h>

int main() {
    float raio = 1, volume = 1;

    //pedindo o raio
    printf("%s", "\nDigite o raio do planeta desejado em metros: ");
    scanf("%f", &raio);
    
    //calculo
    volume = ((4*3.14*(pow(raio, 3)))/3);
    printf("%s%.2f", "O volume do planeta especificado e: ",volume);
    return 0;
}
