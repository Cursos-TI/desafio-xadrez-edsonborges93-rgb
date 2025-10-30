#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int i; // variável de controle para os loops

    const int MOV_BISPO = 5;   // Número de casas que o Bispo se move
    const int MOV_TORRE = 5;   // Número de casas que a Torre se move
    const int MOV_RAINHA = 8;  // Número de casas que a Rainha se move


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("=== MOVIMENTACAO DO BISPO ===\n");
    for (i = 1; i <= MOV_BISPO; i++) {
        printf("Passo %d: Mover CIMA + DIREITA\n", i);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

       printf("\n=== MOVIMENTACAO DA TORRE ===\n");
    i = 1;
    while (i <= MOV_TORRE) {
        printf("Passo %d: Mover DIREITA\n", i);
        i++;
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

     printf("\n=== MOVIMENTACAO DA RAINHA ===\n");
    i = 1;
    do {
        printf("Passo %d: Mover ESQUERDA\n", i);
        i++;
    } while (i <= MOV_RAINHA);


     printf("\nTodas as movimentacoes foram concluídas com sucesso!\n");

    return 0;
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
