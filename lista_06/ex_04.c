/*4) Um dos jogos é o cabo de guerra, onde duas equipes de “x” jogadores competem puxando a 
corda até derrubar a equipe adversária. Foi criada uma fórmula para predizer a força de um jogador, 
sendo ela: 10 multiplicado pela altura do jogador em metros e então multiplicado por 0,7 se a idade for 
maior ou igual a 50 e multiplicado por 0,9 se o jogador for do sexo feminino. Crie um programa que recebe 
como entrada o número de jogadores por equipe e então a altura (em metros) idade e sexo (m ou f) dos jogadores 
da equipe 1, e as mesmas informações da equipe 2. Em seguida diga qual equipe tem mais chance de ganhar 
(“equipe 1”, “equipe 2” ou “empate”), lembre-se que a força da equipe é a soma da força de cada*/

#include <stdio.h>
#include <ctype.h>

int main () {
    int i=1, jogadores=0, idade_1=0, idade_2=0;
    float altura_1=0, altura_2=0, forca_1=0, forca_2=0;
    char sexo_1; char sexo_2;
    printf("Numero de jogadores por time: ");
    scanf("%d", &jogadores);

    for(i=1; i<=jogadores; i++) {
        printf("\nJogador da Equipe 1");
        printf("\nAltura: ");
        scanf("%f", &altura_1);
        printf("\nIdade: ");
        scanf("%i", &idade_1);
        do {
            printf("\nSexo: ");
            scanf(" %c", &sexo_1);
        }while(toupper(sexo_1) != 'M' && toupper(sexo_1) != 'F');
        
        //estrutura de verificacao
        if (idade_1 >= 50) {
            forca_1 += ((10*altura_1)*0.7);
        }
        else if (toupper(sexo_1) == 'F') {
            forca_1 += ((10*altura_1)*0.9);
        }
        else {
            forca_1 += 10*altura_1;
        }
    }
    for(i=1; i<=jogadores; i++) {
        printf("\nJogador da Equipe 2");
        printf("\nAltura: ");
        scanf("%f", &altura_2);
        printf("\nIdade: ");
        scanf("%i", &idade_2);
        do {
            printf("\nSexo: ");
            scanf(" %c", &sexo_2);
        }while(toupper(sexo_2) != 'M' && toupper(sexo_2) != 'F');
        
        //estrutura de verificacao
        if (idade_2 >= 50) {
            forca_2 += ((10*altura_2)*0.7);
        }
        else if (toupper(sexo_1) == 'F') {
            forca_2 += ((10*altura_2)*0.9);
        }
        else {
            forca_2 += 10*altura_2;
        }
    }
    if(forca_1 > forca_2){
        printf("Equipe 1 ganhou");
    }
    else{
        printf("Equipe 2 ganhou");
    }
    return 0;
}