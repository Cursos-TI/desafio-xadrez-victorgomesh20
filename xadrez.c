#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Simulação do movimento da Torre com estrutura 'for'
    int casasTorre = 5;
    printf("Movimento da Torre (para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Simulação do movimento do Bispo com estrutura 'while'
    int casasBispo = 5;
    int j = 1;
    printf("Movimento do Bispo (Diagonal para Cima e Direita):\n");
    while (j <= casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Simulação do movimento da Rainha com estrutura 'do-while'
    int casasRainha = 8;
    int k = 1;
    printf("Movimento da Rainha (para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    printf("\n");

    // Simulação do movimento do Cavalo com loops aninhados
    // Cavalo se move 2 casas para baixo e 1 para a esquerda

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("Movimento do Cavalo (em 'L': duas casas para Baixo e uma para Esquerda):\n");

    // Loop externo: movimento vertical (2 para baixo)
    for (int m = 0; m < movimentosBaixo; m++) {
        printf("Baixo\n");

        // Loop interno: uma vez a cada passo, verificar se é o último passo
        int n = 0;
        while (n < 1 && m == movimentosBaixo - 1) {
            printf("Esquerda\n");
            n++;
        }
    }

    return 0;
}
