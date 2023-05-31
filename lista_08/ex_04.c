/*4) Crie um programa em que o jogador informa qual picareta ele está usando e quantos blocos ele 
precisa quebrar, passando estas informações para uma função que tem como retorno o tempo em segundos 
para se quebrar todos. Utilize o seguinte:
● Picareta de madeira - letra “m”; 1.35 segundos por bloco;
● Picareta de pedra - letra “p”; 0,7 segundos por bloco;
● Picareta de ferro - letra “f”; 0,45 segundos por bloco;
● Picareta de diamante - letra “d”; 0,35 segundos por bloco;
● Picareta de netherito - letra “n”; 0,3 segundos por bloco;
● Picareta de ouro - letra “o” 0,25 segundos por bloco.
Após o retorno para a função principal, imprima este tempo.*/


#include <stdio.h>
#include <ctype.h>

float tempo_mineracao(char picareta, int blocos);

int main () {
    char pic;
    int bloc=0;
    printf("\nPICARETAS");
    printf("\n M-MADEIRA\n P-PEDRA\n F-FERRO\n D-DIAMANTE\n N-NETHERITE\n O-OURO");
    do {
        printf("\nESCOLHA: ");
        scanf(" %c", &pic);
    }while(toupper(pic) != 'M' && toupper(pic) != 'P' && toupper(pic) != 'D' && toupper(pic) != 'N' && toupper(pic) != 'O' && toupper(pic) != 'F');
    printf("\nQuantos blocos serao quebrados? ");
    scanf("%d", &bloc);
    printf("%.2f Segundos", tempo_mineracao(pic, bloc));
    return 0;
}

float tempo_mineracao(char picareta, int blocos) {
    float tempo=0;
    if (toupper(picareta) == 'M') {
        tempo = blocos * 1.35;
    }
    else if (toupper(picareta) == 'P') {
        tempo = blocos * 0.7;
    }
    else if (toupper(picareta) == 'F') {
        tempo = blocos * 0.45;
    }
    else if (toupper(picareta) == 'D') {
        tempo = blocos * 0.35;
    }
    else if (toupper(picareta) == 'N') {
        tempo = blocos * 0.3;
    }
    else if (toupper(picareta) == 'O') {
        tempo = blocos * 0.25;
    }
    return tempo;
}


