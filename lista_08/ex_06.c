/*6) Para comprar uma armadura encantada de um aldeão, são necessárias 21 esmeraldas,
 e é possível vender 32 gravetos por uma esmeralda, conte também que para fazer quatro gravetos 
 são usadas duas tábuas, e para fazer quatro tábuas é usado um bloco de madeira bruta. Crie uma 
 função converteParaTabua(), que recebe como parâmetro quantos blocos de madeira bruta o jogador possui 
 e calcula quantas tábuas é possível produzir; crie uma segunda função converteGravetos(), que recebe o 
 número de tábuas como parâmetro e calcula quantos gravetos é possível produzir a partir destas tábuas; 
 tendo calculado isso, crie uma terceira função vendeGraveto() que recebe o número de gravetos, e retorna 
 quantas esmeraldas é possível ganhar vendendo-os (sendo 32 gravetos por esmeralda); e por fim, crie a função 
 compraArmadura() que recebe quantas esmeraldas o jogador possui e retorna quantas armaduras é possível 
 comprar. (Dica: é possível utilizar uma função que possui retorno como parâmetro para outra função)*/

#include <stdio.h>

int converteParaTabua(int m_bruta); // devolver (n) tabuas
int converteGravetos(int tabuas); // devolver (n) gravetos
int vendeGraveto(int gravetos); // devolver (n) esmeraldas
int compraArmadura(int esmeraldas); // devolve (n) armaduras

int main () {
    int bruta=0;
    printf("\nDigite quantas madeiras brutas deseja converter?: ");
    scanf("%d", &bruta);
    printf("\nArmaduras: [%d]", compraArmadura(vendeGraveto(converteGravetos(converteParaTabua(bruta)))));
    return 0;
}

int converteParaTabua(int m_bruta){ // devolver (n) tabuas
    int tabuas=0;
    tabuas = m_bruta * 4; 
    return tabuas;
}
int converteGravetos(int tabuas) {
    int gravetos=0;
    gravetos = (tabuas * 4)/2;
    return gravetos;
}
int vendeGraveto(int gravetos) {
    int esmeralda=0;
    esmeralda = gravetos/32;
    return esmeralda;
}
int compraArmadura(int esmeraldas) {
    int armadura=0;
    armadura = esmeraldas/21;
    return armadura;
}