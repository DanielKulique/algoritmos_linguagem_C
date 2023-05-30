/*3) Há diversas variáveis necessárias para analisar se um planeta pode ser habitável ou não por humanos, 
sendo as principais a gravidade, a temperatura média do planeta e a composição da atmosfera. 
Crie um procedimento que recebe como parâmetro a gravidade (em m/s2), a temperatura média em Celsius, 
se há oxigênio, e por fim se a atmosfera é ou não tóxica. Com base nisso, o procedimento deve escrever 
“Habitavel por droids” se a gravidade for no máximo 5 vezes maior ou menor que 9,8 m/s2 e a temperatura 
estiver entre -80º e 150 ºC; e deve escrever “Habitavel por humanos” se: 
a temperatura estiver entre -30º e 60ºC, a gravidade for no máximo 40% maior ou menor que 9,8 m/s2, 
a atmosfera tiver oxigênio e a atmosfera não for tóxica.*/

#include <stdio.h>

void habitabilidade(int grav, int temp, int atm, int toxi);

int main () {
    float gravidade=0, temperatura=0, atmosfera=0, toxica=0;
    printf("\nGravidadade em m/s2: ");
    scanf("%f", &gravidade);
    printf("\nTemperatura Média em Graus Celsius: ");
    scanf("%f", &temperatura);
    do {
        printf("\nHa oxigenio? [0-Nao, 1-Sim]: ");
        scanf("%f", &atmosfera);
    } while(atmosfera != 1 && atmosfera != 0);
    do {
        printf("\nToxidade? [0-Nao, 1-Sim]: ");
        scanf("%f", &toxica);
    } while(toxica != 1 && toxica != 0);
    habitabilidade(gravidade, temperatura, atmosfera, toxica);
    return 0;
}

void habitabilidade(int grav, int temp, int atm, int toxi) {
    
    if(6 < grav && grav <= 14 && -30 < temp && grav <= 60 && atm == 1 && toxi == 0) {
        printf("\nHabitavel por humanos e por droids");
    }    
    else if(-40 < grav && grav <= 50 && -80 < temp && temp <= 150) {
        printf("\nApenas habitavel por droids");
    }
    else {
        printf("\nPlaneta nao acessivel!");
    }
}
