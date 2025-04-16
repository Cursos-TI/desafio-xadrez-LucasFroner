#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    

    //bloco de variáveis
    int t = 1;
    int b = 1;

    //bloco de apresentação do jogo
    printf ("Bem-vindo ao jogo de Xadrez!\n");

    //mover a torre 5 casas para a direita
    printf ("\n"); //pular linha para melhor apresentação do resultado
    printf ("Torre, andar 5 casas para a direita.\n");
    while (t <= 5)
    {
        printf ("Direita\n");
        t++;
    }
    
    //mover o bispo 5 casas na diagonal cima direita
    printf ("\n"); //pular linha para melhor apresentação do resultado
    printf ("Bispo, mover 5 casas na diagonal cima direita.\n");
    do
    {
        printf ("Cima Direita\n");
        b++;
    } while (b <= 5);
    
    //mover a rainha 8 casas para a esquerda
    printf ("\n"); //pular linha para melhor apresentação do resultado
    printf ("Rainha, mover 8 casas para a esquerda.\n");
    for (int r = 1; r <= 8; r++)
    {
        printf ("Esquerda\n");
    }
    



    return 0;
}
