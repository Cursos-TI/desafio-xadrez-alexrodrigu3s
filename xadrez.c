#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* 
    Implementação de Movimentação do Cavalo
    movimento em L (2 para baixo, 1 para esquerda ou direita)
*/
void movimentoCavalo(char *direcao1, char *direcao2) {
    int movimentoFinalizado = 0;
    int movimentos = 2;

    while (movimentoFinalizado == 0) {
        // Verificação correta das strings usando strcmp
        if (
            (strcmp(direcao1, "Cima") != 0 && strcmp(direcao1, "Baixo") != 0) ||
            (strcmp(direcao2, "Esquerda") != 0 && strcmp(direcao2, "Direita") != 0)
        ) {
            printf("Direções inválidas.\n");
            break;
        }

        // Movimento em L: 2x em uma direção + 1x em outra
        for (int m = 1; m <= movimentos; m++) {
            printf("%s\n", direcao1);
        }

        printf("%s\n", direcao2);

        movimentoFinalizado = 1;
    }
}

/* 
    Implementação de Movimentação do Bispo
    movimenta-se 5 casas na diagonal para cima e direita usando estrutura 'while'
*/
void movimentoBispo(int casas) {
    if (casas == 0)
        return;
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
    movimentoBispo(casas-1);
}

/*
    Implementação de Movimentação da Torre
    movimenta-se 5 casas para a direita usando estrutura 'for'
*/
void movimentoTorre(int casas) {
    if (casas == 0)
        return;
    printf("Direita\n");
    movimentoTorre(casas-1);
}

/*
    Implementação de Movimentação da Rainha
    movimenta-se 8 casas para a esquerda usando estrutura 'do-while'
*/
void movimentoRainha(int casas) {
    if (casas == 0)
        return;
    printf("Esquerda\n");
    movimentoRainha(casas-1);
}

int main() {

    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;

    printf("Movimento do BISPO: %d casas\n", casasBispo);
    movimentoBispo(casasBispo);

    printf("Movimento da TORRE: %d casas\n", casasTorre);
    movimentoTorre(casasTorre);

    printf("Movimento da RAINHA: %d casas\n", casasRainha);
    movimentoRainha(casasRainha);

    printf("Movimento do CAVALO: %s %s\n", "Cima", "Direita");
    movimentoCavalo("Cima", "Direita");

    printf("\nDesafio de Xadrez - MateCheck Finalizado\n\n");

    return 0;
}
