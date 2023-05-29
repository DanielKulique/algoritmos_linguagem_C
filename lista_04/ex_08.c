/*8) Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginásio da escola de
Hawkins. Cada aluno fornecia a sua idade, série (primeira-1, segunda-2, terceira-3 ou
quarta-4), quantos livros liam por mês e se gostavam de fazer redação (Sim-1 ou Não-0).
Fazer um programa que leia os dados, calcule e imprima:
1. A quantidade de alunos que está na terceira série;
2. A maior quantidade de livros lidos por um aluno que está na quarta série;
3. A porcentagem de alunos que não gostam de fazer redação e que estão na terceira série.
4. Média de idade dos alunos da primeira e segunda séries.
OBS: A condição de parada (flag) é que seja digitado 0 (zero) para idade.*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int idade = 0, livros_lidos = 0, serie = 0, cont_terceira = 0, maior = 0, nao_le = 0; 
    int cont_total = 0;
    float idade_1_2 = 0, cont_1_2 = 0;
    char redacao;

    do {
        printf("Informe a idade [0-PARA]: ");
        scanf("%d", &idade);
        
        if (idade == 0)
            break;
        
        printf("\nSERIE: \n1-Primeira, \n2-Segunda, \n3-Terceira \n4-Quarta \nESCOLHA:");
        scanf("%d", &serie);

        printf("\nQuantos livros lia por mes?");
        scanf("%d", &livros_lidos);

        do{
            printf("\nGostava de fazer redacao?[S/N]");
            scanf(" %c", &redacao);
        }while(toupper(redacao) != 'S' && toupper(redacao) != 'N');

        if (serie == 3) {
            cont_terceira++;
            if (toupper(redacao) == 'N'){
                nao_le++;
            }
        }
        if (serie == 4){
            if (livros_lidos >= maior)
                maior = livros_lidos;
        }
        if (serie == 1 || serie == 2) {
            cont_1_2++;
            idade_1_2 += idade;
        }
        cont_total ++;
    }while(true);
    printf("\nA quantidade de alunos que esta na terceira serie: [%d]", cont_terceira);
    printf("\nA maior quantidade de livros lidos por um aluno que esta na quarta serie: [%d]", maior);
    printf("\nA porcentagem de alunos que nao gostam de fazer redaçao e que estao na terceira serie: [%.2f]", (float)((nao_le*100)/cont_total));
    printf("\nMedia de idade dos alunos da primeira e segunda series %.2f", ((float)idade_1_2/cont_1_2));
    return 0;
}

