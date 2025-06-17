#include <stdio.h>

//Nível Novato
int main(){
    //Entrada de dados e constantes
   const int MOVIMENTOS_TORRE = 5;
   const int MOVIMENTOS_BISPO = 5;
   const int MOVIMENTOS_RAINHA = 8;

    // Variáveis de contador que serão usadas nos loops while e do-while.
    int contador = 0;

    printf("--- Movimentos da Torre ---\n");
    //Loop  for para a torre
    for (int i = 1; i <= MOVIMENTOS_TORRE; i++)
    {
        printf("Direita\n");
    }
    contador = 0; 

    printf("--- Movimentos do Bispo ---\n");
    //Loop do-while para o Bispo
    do
    {
        printf("Cima Direita \n");
        contador++;//incremento
    } while (contador< MOVIMENTOS_BISPO);
    contador = 0; 


    printf("--- Movimentos da Rainha ---\n");
    //Loop while para a Rainha
    while (contador < MOVIMENTOS_RAINHA)
    {
        printf("Esquerda\n");
        contador++; // incremento
    }
    
    //---Nivel Aventureiro----
    
    printf("\n");//quebra de linha 
    printf("---- Movimentos do Cavalo ----\n");
    // Constantes para o movimento específico do Cavalo
    const int PASSOS_PARA_BAIXO = 2;
    const int PASSOS_PARA_ESQUERDA = 1; 

    //variável para controlar o loop de fora.
    //inicia com o valor 0.
    int controleLoop = 0;
    //o loop 'while' vai continuar rodando ENQUANTO a variável 'controleLoop' for 0.
    while (controleLoop == 0) {
        // Imprime uma mensagem de início.
        printf("Iniciando movimento em L do Cavalo:\n");
        // Loop 'for' para os passos para baixo.
        // Vai repetir o número de vezes definido em 'PASSOS_PARA_BAIXO'.
        for (int i = 0; i < PASSOS_PARA_BAIXO; i++) {
            printf("Baixo\n");
        }

        //Loop 'for' para os passos para a esquerda.
        for (int i = 0; i < PASSOS_PARA_ESQUERDA; i++) {
            printf("Esquerda\n");
        }

        // Agora mudei o valor da variável de controle para 1.
        // Isso vai fazer o loop 'while' parar de repetir.
        controleLoop = 1; 

    } // Fim do loop while.




    return 0;
} 