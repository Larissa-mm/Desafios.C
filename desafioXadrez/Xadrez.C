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
        printf("Direita/n");
    }
    contador = 0; 

    printf("--- Movimentos do Bispo ---\n");
    //Loop do-while para o Bispo
    do
    {
        printf("Cima Direita n/");
        contador++;//incremento
    } while (contador< MOVIMENTOS_BISPO);
    contador = 0; 


    printf("--- Movimentos da Rainha ---\n");
    //Loop while para a Rainha
    while (contador < MOVIMENTOS_RAINHA)
    {
        printf("Esquerda/n");
        contador++; // incremento
    }

    
    











    return 0;
} 