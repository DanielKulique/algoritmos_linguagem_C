#include <stdio.h>

int main() {
    int jogadores[6];
    int total_jogadores = 0;
    int total_eliminados = 0;
    float media_eliminados = 0.0;

    printf("Digite a quantidade de jogadores no inicio dos 6 jogos:\n");

    for (int i = 0; i < 6; i++) {
        printf("Jogo %d: ", i + 1);
        scanf("%d", &jogadores[i]);

        if (i < 5) {
            total_jogadores += jogadores[i];
        }
    }

    total_eliminados = total_jogadores - jogadores[5];
    media_eliminados = (float)total_eliminados / 5;

    printf("A média de eliminados nos 5 primeiros jogos é: %.2f\n", media_eliminados);

    return 0;
}
