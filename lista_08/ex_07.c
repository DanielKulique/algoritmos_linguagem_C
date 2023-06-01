/* 7)Monstros só surgem em locais escuros, com um nível de iluminação menor ou igual a 7, 
além disso, eles só aparecem a no máximo 128 blocos de distância do jogador. Crie duas funções para 
verificar se em um determinado bloco é possível que surjam monstros ou não: a primeira deve receber 
como parâmetro as coordenadas no espaço(x,y,z) do bloco e do jogador, calcular a distância entre eles e 
então verificar se a distância é menor ou igual a 128, por fim retornar este resultado para a função 
principal; a segunda função deve receber como parâmetro o nível de iluminação do bloco, e verificar se é 
menor ou igual a 7, retornando este resultado a função principal. A função principal deve ler as coordenadas 
do jogador, as coordenadas do bloco, e o nível de iluminação, e deve como saída falar “podem surgir monstros” 
ou “nao podem surgir monstros”. OBS: Para calcular a distância D de dois pontos P e P0 no espaço é usada a 
fórmula:*/

#include <stdio.h>
#include <math.h>

int distancia_bloco_jogador(int xj, int yj, int zj, int xb, int yb, int zb);
int iluminacao(int nivel);

int main() {
    int xj, yj, zj, xb, yb, zb, nivel_luz, distancia, luz;
    printf("\nDigite as coordenadas do jogador (x, y, z):");
    scanf("%d %d %d", &xj, &yj, &zj);
    printf("\nDigite as coordenadas do bloco (x, y, z):");
    scanf("%d %d %d", &xb, &yb, &zb);
    distancia = distancia_bloco_jogador(xj, yj, zj, xb, yb, zb);
    printf("\nQual o Nivel de luz?");
    scanf("%d", &nivel_luz);
    luz = iluminacao(nivel_luz);
    if (distancia == 0 && luz == 0) {
        printf("\nEh possivel o spawn de mobs agressivos!");
    }
    else {
        printf("\nNao nascerao mobs agressivos!");
    }
    return 0;
}

int distancia_bloco_jogador(int xj, int yj, int zj, int xb, int yb, int zb) {
    int dx=0, dy=0, dz=0, soma_quadrado=0, distancia=0;
    //distancia das coordenadas:
    dx = xb - xj;
    dy = yb - yj;
    dz = zb - zj;
    soma_quadrado = (pow(dx, 2) + pow(dy, 2) + pow(dz, 2));
    distancia = sqrt(soma_quadrado);
    if (distancia <= 128) {
        return 0; //verdade (nasce monstros)
    }
    else {
        return 1; //falso (nao nasce monstros)
    }
}
int iluminacao(int nivel) {
    if (nivel <=7) {
        return 0; //verdade (nasce monstros)
    }
    else {
        return 1; //falso (nao nasce monstros)
    }
}

