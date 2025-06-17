#include <stdio.h>

//SEÇÃO DE FUNÇÕES RECURSIVAS (NÍVEL MESTRE)
void moverTorreRecursivo(int passos_restantes) {
    // Caso-Base: se não há mais passos, a função para.
    if (passos_restantes <= 0) {
        return;
    }
    // Ação: imprime o movimento.
    printf("Direita\n");
    // Chamada Recursiva: chama a si mesma com um passo a menos.
    moverTorreRecursivo(passos_restantes - 1);
}

// Move o Bispo recursivamente na diagonal (Cima + Direita).
// passos_restantes O número de movimentos que ainda faltam.
void moverBispoRecursivo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(passos_restantes - 1);
}
//Move a Rainha recursivamente para a esquerda.
// passos_restantes O número de movimentos que ainda faltam.
void moverRainhaRecursivo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(passos_restantes - 1);
}
 
//Função principal
int main(){
    //Entrada de dados e constantes
    const int PASSOS_TORRE = 5;
    const int PASSOS_BISPO = 5;
    const int PASSOS_RAINHA = 8;
    const int TOTAL_PASSOS_CIMA_CAVALO = 2;
    const int TOTAL_PASSOS_DIREITA_CAVALO = 1;

    //RECURSIVIDADE: Movimentação da Torre, Bispo e Rainha
     printf("\n--- Peças com Movimento Recursivo ---\n\n");
    
    printf("Torre Recursiva (5 passos para a Direita):\n");
    moverTorreRecursivo(PASSOS_TORRE);

    printf("\nBispo Recursivo (5 passos na diagonal Cima-Direita):\n");
    moverBispoRecursivo(PASSOS_BISPO);

    printf("\nRainha Recursiva (8 passos para a Esquerda):\n");
    moverRainhaRecursivo(PASSOS_RAINHA);

    //LOOPS COMPLEXOS: Movimentação do Cavalo
    printf("\n\n--- Cavalo com Loop Complexo (2 p/ Cima, 1 p/ Direita) ---\n");
    
    // Variáveis para controlar os passos do movimento em "L"
    int passos_cima = 0;
    int passos_direita = 0;

    // Loop com condição múltipla (operador OU ||)
    for (int i = 0; passos_cima < TOTAL_PASSOS_CIMA_CAVALO || passos_direita < TOTAL_PASSOS_DIREITA_CAVALO; i++) {
        // Primeiro, executa os movimentos para cima
        if (passos_cima < TOTAL_PASSOS_CIMA_CAVALO) {
            printf("Cima\n");
            passos_cima++;
        } 
        // Depois que os movimentos para cima terminam, executa o para a direita
        else if (passos_direita < TOTAL_PASSOS_DIREITA_CAVALO) {
            printf("Direita\n");
            passos_direita++;
        }
    }
    //LOOPS ANINHADOS: Segunda implementação do Bispo
    printf("\n\n--- Bispo com Loops Aninhados ---\n");
    
    // Loop mais externo: controla o número total de passos na diagonal.
    for (int passo_atual = 0; passo_atual < PASSOS_BISPO; passo_atual++) {
        printf("Passo Diagonal %d:\n", passo_atual + 1);
        
        // Loop interno para o movimento vertical (roda só uma vez)
        int mov_vertical_feito = 0;
        while (mov_vertical_feito == 0) {
            printf("  Cima\n");
            mov_vertical_feito = 1;
        }

        // Loop interno para o movimento horizontal (roda só uma vez)
        int mov_horizontal_feito = 0;
        while (mov_horizontal_feito == 0) {
            printf("  Direita\n");
            mov_horizontal_feito = 1;
        }
    }
    return 0 ;
}