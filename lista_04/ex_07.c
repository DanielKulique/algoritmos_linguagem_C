/*7) Em uma pesquisa de campo na cidade de Hawkins. Indiana, uma editora solicitou os
seguintes dados para os entrevistados: sexo, idade e quantidade de livros que leu no ano
de 2010. Faça um programa que leia os dados digitados pelo usuário, sendo que deverão
ser solicitados dados até que a idade digitada seja um valor negativo. Depois, calcule e
imprima: 1. A quantidade total de livros lidos pelos entrevistados menores de 10 anos. 2. A
quantidade de mulheres que leram 5 livros ou mais. 3. A média de idade dos homens que
leram menos que 5 livros. 4. O percentual de pessoas que não leram livros.*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


int main() {
    int idade = 0, livros = 0, cont_10 = 0, cont_mulher = 0, cont_homem_idade = 0, cont_homem = 0, cont_naoleu = 0;
    int cont_pessoas = 0;
    char sexo;

    do {
        printf("Qual a idade? ");
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }
        do{
            printf("Qual o sexo?[H/M]");
            scanf(" %c", &sexo);
        }while(toupper(sexo) != 'H' && toupper(sexo) != 'M');
        printf("Leu Quantos livros?");
        scanf("%d", &livros);

        //estruturas de decicao
        if (idade <= 10) {
            cont_10 ++;
        }
        if (sexo == 'M' && livros > 5) {
            cont_mulher ++;
        }
        if (sexo == 'H' && livros < 5) {
            cont_homem ++;
            cont_homem_idade += idade;
        }
        if (livros == 0) {
            cont_naoleu ++;
        }
        cont_pessoas ++;
    } while(true);

    //imprimindo resultados
    printf("\nLeitores com menos de 10 anos: [%d]", cont_10);
    printf("\nMulheres que leram 5 livros ou mais: [%d]", cont_mulher);
    printf("\nA media de idade dos homens que leram menos que 5 livros: [%d anos]", cont_homem_idade/cont_homem);
    printf("\n4. O percentual de pessoas que nao leram livros: [%.2f] ", (float)((100*cont_naoleu)/cont_pessoas));
    return 0;
}