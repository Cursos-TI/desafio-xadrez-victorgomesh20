#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas) {
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ---------------------------------------
// Função recursiva para Rainha
// ---------------------------------------
void moverRainha(int casas) {
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -----------------------------------------------------
// Função recursiva para Bispo + loops aninhados internos
// -----------------------------------------------------
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0)
        return;

    // Loop aninhado simula passo na diagonal: Cima + Direita
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivo(casasRestantes - 1);
}

// -----------------------------------------------------
// Movimento do Cavalo (em "L": 2 casas para CIMA e 1 para DIREITA)
// com loops aninhados, múltiplas variáveis e controle de fluxo
// -----------------------------------------------------
void moverCavaloL() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo (em 'L': duas casas para Cima e uma para Direita):\n");

    for (int i = 1; i <= movimentosVerticais; i++) {
        if (i == 2) {
            // Segunda casa, vamos tentar mover para a direita
            for (int j = 1; j <= movimentosHorizontais; j++) {
                if (j > 1) {
                    break;
                }
                printf("Direita\n");
            }
        }

        // Pule movimento se for inválido (exemplo de uso de continue)
        if (i < 1) {
            continue;
        }

        printf("Cima\n");
    }
}

int main() {
    // ----------------------------
    // Torre: recursiva para Direita
    // ----------------------------
    int casasTorre = 5;
    printf("Movimento da Torre (para a Direita):\n");
    moverTorre(casasTorre);

    printf("\n");

    // ----------------------------
    // Bispo: recursivo + loops aninhados
    // ----------------------------
    int casasBispo = 5;
    printf("Movimento do Bispo (Diagonal para Cima e Direita):\n");
    moverBispoRecursivo(casasBispo);

    printf("\n");

    // ----------------------------
    // Rainha: recursiva para Esquerda
    // ----------------------------
    int casasRainha = 8;
    printf("Movimento da Rainha (para a Esquerda):\n");
    moverRainha(casasRainha);

    printf("\n");

    // ----------------------------
    // Cavalo: loops complexos
    // ----------------------------
    moverCavaloL();

    return 0;
}
