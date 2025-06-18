#include<stdio.h>

#define TAMANHO 10
#define AGUA 0
#define NAVIO 3

// --- FUNÇÕES AUXILIARES ---
// Funções que ajudam a organizar o código e evitam repetição.


void iniciartabuleiro(int tab[TAMANHO][TAMANHO]){
    for (int i = 0;i < TAMANHO ; i++){
        for (int j = 0; j < TAMANHO; j++) {
                tab[i][j] = AGUA; // Define a célula atual como água.
            }
    }
}
void exibirTabuleiro(int tab[TAMANHO][TAMANHO]) {
    printf("\n=== TABULEIRO DE BATALHA NAVAL ===\n");
    
    // 1. Imprime as letras das colunas (A - J)
    printf("   "); // Deixa um espaço para os números das linhas
    for (int i = 0; i < TAMANHO; i++) {
        // O truque: 'A' é um número para o computador. Somando 'i' (0, 1, 2...),
        // obtemos os códigos dos caracteres 'A', 'B', 'C'...
        printf("%c ", 'A' + i);
    }
    printf("\n");


// 2. Imprime cada linha do tabuleiro
    for(int i = 0; i < TAMANHO; i++) {
        // Imprime o número da linha (de 1 a 10).
        // Usamos %2d para garantir o alinhamento quando o número for 10.
        printf("%2d ", i + 1); 

        // Imprime o conteúdo da linha (água ou navio)
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tab[i][j]);
        }
        // Pula para a próxima linha no console.
        printf("\n");
    }
    printf("==================================\n");
}

//--- FUNÇÃO PRINCIPAL---
int main(){

    int  TABULEIRO[TAMANHO][TAMANHO];
    printf("Iniciando a montagem do tabuleiro...\n");
    iniciartabuleiro(TABULEIRO);

     // --- POSICIONAMENTO DOS NAVIOS ---
     // Navio 1: Horizontal (tamanho 3)
    int navio_h_linha = 2; // Internamente, linha 2 (para o usuário será a linha 3)
    int navio_h_coluna_inicial = 3; // Internamente, coluna 3 (para o usuário será a coluna D)
    int tamanho_navio = 3;
    
    // Mensagem para o usuário, já com as coordenadas "traduzidas"
    printf("Posicionando navio horizontal na linha %d, coluna %c.\n", navio_h_linha + 1, 'A' + navio_h_coluna_inicial);
    for (int i = 0; i < tamanho_navio; i++) {
        TABULEIRO[navio_h_linha][navio_h_coluna_inicial + i] = NAVIO;
    }

    // Navio 2: Vertical (tamanho 3)
    int navio_v_linha_inicial = 5; // Internamente, linha 5 (usuário: linha 6)
    int navio_v_coluna = 6; // Internamente, coluna 6 (usuário: coluna G)
    
    printf("Posicionando navio vertical na linha %d, coluna %c.\n", navio_v_linha_inicial + 1, 'A' + navio_v_coluna);
    for (int i = 0; i < tamanho_navio; i++) {
        TABULEIRO[navio_v_linha_inicial + i][navio_v_coluna] = NAVIO;
    }
    
    exibirTabuleiro(TABULEIRO);


    return 0;
}