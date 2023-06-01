/*5) Existem três dimensões no minecraft; o mundo normal, o Nether e o Fim; construindo um portal, 
é possível atravessar do mundo normal para o Nether (e vise versa) em qualquer ponto, porém o Nether 
é 8 vezes menor que o mundo normal, e com isso, para cada bloco que o jogador se move no nether, quando 
ele retornar, terá se movido 8 blocos no mundo normal. Crie uma função que recebe como parâmetro as 
coordenadas (x,y), sem considerar a altura, de um portal no nether, e multiplicando-as por 8, retorne onde 
o jogador sairá no mundo normal. Crie uma segunda função que recebe as coordenadas de um portal no mundo 
normal e, dividindo-as por 8, retorne onde o jogador sairá no Nether. Na função principal, dê a opção do 
usuário escolher se quer converter as coordenadas de Nether para mundo normal, ou ao contrário.*/

#include <stdio.h>

void nether_normal(int x, int y);
void normal_nether(int x, int y);

int main () {
    int opcao=0, x=0, y=0;
    printf("-------------------------------------");
    printf("\nConversao de blocos entre mundos!");
    printf("\nMundo normal para o Nether [0]");
    printf("\nNether para o mundo normal [1]");
    do {
        printf("\nEscolha");
        scanf("%d", &opcao);
    }while(opcao != 0 && opcao != 1);
    printf("\nDigita a cordenada (x):"); //entrada dos dados
    scanf("%d", &x);
    printf("\nDigita a cordenada (y):"); //entrada dos dados
    scanf("%d", &y);
    if (opcao == 0) {
        normal_nether(x, y);
    }
    else {
        nether_normal(x, y);
    }
    return 0;
}

//funcoes de conversao
void normal_nether(int x, int y) {
    int resultado_x=0,resultado_y=0;
    resultado_x = (x / 8);
    resultado_y = (y / 8);
    printf("\n(x, y) = (%d, %d)", resultado_x, resultado_y);
}

void nether_normal(int x, int y) {
    int resultado_x=0,resultado_y=0;
    resultado_x = x * 8;
    resultado_y = y * 8;
    printf("\n(x, y) = (%d, %d)", resultado_x, resultado_y);
}
