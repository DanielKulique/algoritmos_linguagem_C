/*3) Crie uma função que retorne a quantidade de vacas após “n” gerações, dado um número inicial de 
vacas e quantas gerações futuras quer-se prever. Utilize uma progressão geométrica de razão 1.5 
(pois cada duas vacas produzem uma nova por geração) - e lembre-se de arredondar para baixo o número 
final da população.*/

#include <stdio.h>

int quant_vacas(int geracoes);

int main() {
    int ger=0, vacas=0;
    printf("Numero de geracoes: ");
    scanf("%d", &ger);
    vacas = quant_vacas(ger);
    printf("%d", vacas);
    return 0;
}

int quant_vacas(int geracoes) {
    float q=1.5; //q = razao
    int i=1, vacas_tot=2;
    for (i = 1; i <= geracoes-1; i++){
        //printf("\n%d", vacas_tot);
        vacas_tot = vacas_tot * q;
    }
    return vacas_tot;
}
