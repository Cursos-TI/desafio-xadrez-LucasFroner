#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
    
//bloco de recursividade
void movTorre (int casas) {

    if (casas > 0)
    {
        printf ("Direita\n");
        movTorre (casas - 1);
    }
    
}

void movBispo (int casas) {

    if (casas > 0)
    {
        for (int i = 1; i <= 1; i++)
        {
        //eixo vertical
        printf ("Cima");
        printf (" "); //espaço utilizado para melhor visualização
            for (int j = 1; j <= 1; j++)
            {
                //eixo horizontal
                printf ("Direita");
            }
        printf ("\n");
        movBispo (casas - 1);
        }
    }        
}

void movRainha (int casas){

    if (casas > 0){
        printf ("Esquerda\n");
        movRainha (casas - 1);
    }
}

//void movCavalo (int casas) {
//void movCavalo (int casasCima, int casasDireita){
void movCavalo (){

   for (int i = 0, j = 0; i < 2 && j < 1; i++) {
       printf ("Cima\n");
       for (j; j < 1 && i == 1; j++)
       {
        printf ("Direita\n");
       }
    }

/*      //realizei o exercício utilizando tanto o continue (exemplo abaixo) quanto o for aninhado com múltiplas condições (exemplo acima)
        //não encontrei a necessidade de mesclar ambas as técnicas, sendo possível realizar de um jeito ou de outro de forma eficaz
    for (int i = 0; i < casas; i++)
    {
        if (i < casas - 1)
        {
            printf ("Cima\n");
            continue;
        }   
        printf ("Direita\n");
    }

        //também realizei o exercício utilizando recursividade
        if (casasCima > 0) {
        printf ("Cima\n");
        movCavalo (casasCima - 1, casasDireita);
    } else if (casasDireita > 0) {
        printf ("Direita\n");
        movCavalo (casasCima, casasDireita - 1);
    }


*/
}

int main () {

    //bloco de apresentação do jogo
    printf ("Bem-vindo ao jogo de Xadrez!\n");

    //mover a torre 5 casas para a direita
    printf ("\n"); //pular linha para melhor apresentação do resultado
    printf ("Torre, andar 5 casas para a direita.\n");
    movTorre (5);
    
    //mover o bispo 5 casas na diagonal cima direita
    printf ("\n"); //pular linha para melhor apresentação do resultado
    printf ("Bispo, mover 5 casas na diagonal cima direita.\n");
    movBispo (5);
    
    //mover a rainha 8 casas para a esquerda
    printf ("\n"); //pular linha para melhor apresentação do resultado
    printf ("Rainha, mover 8 casas para a esquerda.\n");
    movRainha (8);

    //mover o cavalo 2 casas para cima e 1 para a direita
    printf ("\n"); //pular linha para melhor apresentação do resultado
    printf ("Cavalo, mover 2 casas para cima e 1 para a direita.\n");
    movCavalo ();
    //movCavalo (3);
    //movCavalo (2, 1);





    return 0;
}
