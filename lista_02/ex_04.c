/*A temperatura de um exaustor na Usina Nuclear de Springfield deve estar entre 120º C e
140º C para estar em funcionamento normal, menos que isso e provavelmente há um mal
funcionamento e mais que isso há risco de ocorrer um acidente. Crie um programa que
recebe como entrada a temperatura do exaustor e então calcula se ela está no intervalo
seguro ou maior ou menor e imprima uma mensagem adequada a situação.*/

#include <stdio.h>

int main(){
    float temp;
    printf("Digite a temperatura do exaustor: ");
    scanf("%f", &temp);
    if (temp<120){
        printf("[%.2f C] - Ha um mal funcionamento!", temp);
    }
    else if(temp>140){
        printf("[%.2f C] - Ha risco de ocorrer um acidente!", temp);
    }
    else {
        printf("A temperatura [%.2f C] esta OK.", temp);
    }
    return 0;
}