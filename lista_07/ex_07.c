/*7) Algumas das pedras preciosas mais valiosas da galáxia são a “Gema Arco-íris”, “Cristal Nova” e 
“Gema Sasho”. Crie um procedimento que receba uma letra correspondente a alguma dessas pedras, e o 
peso em CSC (Coruscant Standard Carat - unidade de medida de massa) e calcule o preço 
(em Créditos da República) desta gema baseado nos seguintes valores:
● “a”/“A” - Gema Arco-íris - 500.000 créditos por CSC
● “n”/”N” - Cristal Nova - 30.000 créditos por CSC
● “s”/”S” - Gema Sasho - 10.000 créditos por CSC*/

#include <stdio.h>
#include <ctype.h>

float conversor(char pedra, float peso);

int main() {
    float p=0;
    char ped;
    //entrada de dados
    printf("\nESCOLHA: \nA-GEMA ARCO-IRIS \nN-CRISTAL NOVA \nS-GEMA SASHO");
    do {
    printf("\n=>");
    scanf(" %c", &ped);
    }while(toupper(ped) != 'A' && toupper(ped) != 'N' && toupper(ped) != 'S');
    //entrada de dados
    printf("\nDigite o peso da pedra: ");
    scanf("%f", &p);
    //chamada de funcao
    printf("%.0f", conversor(ped, p));
    return 0;
}

float conversor(char pedra, float peso) {
    float credito=0, xC=0;

    if (toupper(pedra) == 'A') {
        credito = 500000;
    }
    else if (toupper(pedra) == 'N') {
        credito = 30000;
    }
    else {
        credito = 10000;
    }
    xC = credito * peso;
    return xC;
}