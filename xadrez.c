

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


#include <stdio.h>
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int main() {
    // Constantes de movimento
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    int i;


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

  
    printf("=== MOVIMENTACAO DO BISPO ===\n");
    for (i = 1; i <= MOV_BISPO; i++)
     {
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


}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.


// Função recursiva para movimentar o Bispo



// Função recursiva para movimentar a Torre




// Função recursiva para movimentar a Rainha



// =============================
// FUNÇÃO PRINCIPAL
// =============================