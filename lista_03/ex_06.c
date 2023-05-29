/*6) Crie um programa que através da velocidade que foi medida de cada traje do Homem de
Ferro, advinhe qual a versão da armadura, a velocidade V deve ser inserida em “Mach” que
refere-se a ‘V’ vezes a velocidade do som.
● Até 0.17 mach - Mark I
● >0.18 e < 3 mach - Mark II
● >3 e <8.7 mach - Model 29
● >8.7 mach - Space Armor*/

#include <stdio.h> 

int main () {
    float march;
    printf("Velocidade medida em March: ");
    scanf("%f", &march);
    
    printf("Armadura: \n");
    if (march < 0.18) {
        printf("Mark I");
    }
    else if (march < 3) {
        printf("Mark II");
    }
    else if (march < 8.7) {
        printf("Model 29");
    }
    else {
        printf("Space Armor!");
    }
    return 0;
}