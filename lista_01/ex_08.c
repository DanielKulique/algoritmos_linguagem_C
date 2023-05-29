/*O tempo de uma viagem espacial é dado em segundos, crie um programa que lê o tempo
ao início da viagem TI e o tempo final na chegada TF, então escreva na tela o tempo total
em horas, minutos e segundos.*/

int main() {
    int TI, TF, tempo_total, horas, minutos, segundos;

    //entrada de dados
    printf("Digite o tempo inicial da viagem (em segundos): ");
    scanf("%d", &TI);
    printf("Digite o tempo final da viagem (em segundos): ");
    scanf("%d", &TF);

    //tempo total
    tempo_total = TF - TI;
    
    //horas, minutos e segundos
    horas = tempo_total /3600;
    minutos = (tempo_total % 3600)/60;
    segundos = (tempo_total % 3600)%60;

    printf("Tempo total da viagem: %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);
    return 0;
}