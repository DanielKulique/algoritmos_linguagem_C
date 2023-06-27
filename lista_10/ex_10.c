//jogo da velha simples (Exercicio do livro: C-Completo total)

#include <stdio.h>
#include <stdlib.h>

char matrix[3][3];

char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

int main (){
    char done;

    printf("Esteeh o jogo-da-velha.\n");
    printf("Voce estara jogando contra o computador.\n");
    done = ' ';
    init_matrix();
    do {
        disp_matrix();
        get_player_move();
        done = check(); //verifica se ha vencedor
        if (done != ' '){
            break; //alguem venceu!
        }
        get_computer_move();
        done = check(); //verifica se ha vencedor
    }while (done ==  ' ');
    if (done=='X'){
        printf("Voce Ganhou!\n");
    }
    else {
        printf("O computador ganhou!\n");
    }
    disp_matrix(); // mostra as posicoes finais
    return 0;
}
//inicializar a matriz
void init_matrix(void){
    int i, j;

    for (i=0;i<3;i++){
        for(j=0; j<3;j++){
            matrix[i][j] = ' '; //todas a posiçoes sao preenchidas por espaço ' ';
        }
    }
}
//jogada do player
void get_player_move(void){
    int x, y;

    printf("Digite as coordenadas para o X");
    scanf("%d%d", &x, &y);

    //decrementa 1 das posições para equivalerem a matriz real;
    x--; 
    y--;

    if(matrix[x][y]!= ' ') {
        printf("Posicao invalida, tente novamente. \n");
        get_player_move();
    }
    else {
        matrix[x][y] = 'X';
    }
}
//Jogada do computador
void get_computer_move(void){
    int i, j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (matrix[i][j]==' '){
                break;
            }
        }
        if (matrix[i][j]==' '){
            break;
        }
    }
    if(i*j==9){
        printf("Empate\n");
        exit(0);
    }
    else{
        matrix[i][j]='O';
    }
}

//mostra matriz na tela
void disp_matrix(void){
    int t;

    for(t=0;t<3;t++){
        printf(" %c | %c | %c", matrix[t][0], matrix[t][1], matrix[t][2]);
        if(t!=2){
            printf("\n---|---|---\n");
        }
        printf("\n");
    }
}
//verifica se ha vencedor
char check(void){
    int i, j, cont=0;
    int referencia = matrix[0][0];

    for(i=0;i<3;i++){ //verifica as linhas
        if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2]){
            return matrix[i][0];
        }
    }
    
    for(i=0;i<3;i++){ //verifica as linhas
        if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i]){
            return matrix[0][i];
        }
    
    }
    //testando as diagonais
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if(i==j){
                if (matrix[i][j]==referencia){
                    cont++;
                }
            }
        }
    }
    if (cont==3){
        return referencia;
    }
    if (matrix[0][2]==matrix[1][1] && matrix[1][1] == matrix[0][2]){
        return matrix[0][2];
    }
    return ' ';
}