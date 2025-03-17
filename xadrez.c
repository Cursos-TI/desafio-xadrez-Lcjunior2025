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

#include <stdio.h>

// Foi criada a função recursiva para que a  movimentação da Torre
// Foi criada a condição if para a relização da parada recursiva
// Foi feito nessa linha a chamada recursiva
void Torre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    Torre(casas - 1); 
}

// Para a movimentação do Bispo foi criada a função recursiva 
// Foi criada a condição if para a relização da parada recursiva
// Foi feito nessa linha a chamada recursiva
void Bispo(int casas) {
    if (casas <= 0) return; 
    printf("Cima, Direita\n");
    Bispo(casas - 1); 
}

// Foi criada a função recursiva para que a  movimentação da Rainha
// Foi criada a condição if para a relização da parada recursiva
// Foi feito nessa linha a chamada recursiva
void Rainha(int casas) {
    if (casas <= 0) return; 
    printf("Esquerda\n");
    Rainha(casas - 1); 
}

int main() {
    // Aqui esta sendo descrito a movimentação  da Torre em 5 casas para a direita 
    printf("Movimento da Torre:\n");
    Torre(5);

    // Nesse esta sendo descrito a movimentação do Bispo em 5 casas na diagonal para cima e à direita 
    printf("\n Movimento do Bispo:\n");
    Bispo(5);

    // Aqui esta sendo descrito o movimento da Rainha em 8 casas para a esquerda 
    printf("\n Movimento da Rainha:\n");
    Rainha(8);

    // E por ultimo a descrição do movimento do Cavalo em 2 casas para cima e 1 casa para a direita
    // Número de casas para cima
    // Número de casas para a direita 
    printf("\n Movimento do Cavalo:\n");
    int casas_cima = 2;  
    int casas_direita = 1; 

    // Loop for para as casas para cima
    for (int i = 1; i <= casas_cima; i++) {
        printf("Cima\n");
    }

    // Loop while para a casa para a direita
    int contador_direita = 1;
    while (contador_direita <= casas_direita) {
        printf("Direita\n");
        contador_direita++;
    }

    return 0;
}


