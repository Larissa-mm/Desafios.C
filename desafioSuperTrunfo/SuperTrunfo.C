#include  <stdio.h>

int main(){
    //declaração de variaveís  da carta 1
    char estadoC1 ;// para armazenar as letras de A a H dos oito estados
    char CodigoC1[5];//variavel para armazenar Codigo da carta
    char NomeCidadeC1 [50];//variavel para armazenar nome da cidade
    int PopulacaoC1;// para armazenar dados de população
    float AreaC1;//armazena dados da area  da cidade em km²
    float PibC1;//armazena o pib da cidade
    int PontosTurC1;//armazena quantidade de pontos turisticos

    //declaração variaveis da carta 2
    char estadoC2 ;// letra  de A a H dos oito estados
    char CodigoC2[5];//variavel para armazenar Codigo da carta
    char NomeCidadeC2[50];//variavel para armazenar nome da cidade
    int PopulacaoC2;// para armazenar dados de população
    float AreaC2;//armazena dados da area  da cidade em km²
    float PibC2;//armazena o pib da cidade
    int PontosTurC2;//armazena quantidade de pontos turisticos

    //inserindo os dados da carta 1
    printf("--- Insira os dados da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c",&estadoC1);
    printf("Digite o código da carta(letra do estado + número de 01 a 04) :");
    scanf(" %s",CodigoC1);
    printf("Digite o nome da Cidade(por favor digite sem espaços):");
    scanf(" %s",NomeCidadeC1);
    printf("Digite o número de habitantes da cidade:");
    scanf(" %d",&PopulacaoC1);
    printf("Digite a área da cidade em Km²: ");
    scanf(" %f",&AreaC1);
    printf("Digite o PIB da cidade em reais: ");
    scanf(" %f",&PibC1);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d",&PontosTurC1);

    //inserindo os dados da carta 2
    printf("--- Insira os dados da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c",&estadoC2);
    printf("Digite o código da carta(letra do estado + número de 01 a 04) :");
    scanf(" %s",CodigoC2);
    printf("Digite o nome da Cidade(por favor digite sem espaços):");
    scanf(" %s",NomeCidadeC2);
    printf("Digite o número de habitantes da cidade:");
    scanf(" %d",&PopulacaoC2);
    printf("Digite a área da cidade em Km²: ");
    scanf(" %f",&AreaC2);
    printf("Digite o PIB da cidade em reais: ");
    scanf(" %f",&PibC2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d",&PontosTurC2);

    //exibindo os dados da carta 1 na tela 
    printf("--carta 1:--\n");
    printf("Estado: %c\n",estadoC1);
    printf("Código: %s\n",CodigoC1);
    printf("Nome da Cidade: %s\n",NomeCidadeC1);      
    printf("População: %d\n",PopulacaoC1);
    printf("Área: %.2f Km²\n",AreaC1);
    printf("PIB: %.2f bilhoes de reais\n",PibC1);
    printf("Número de Pontos Turísticos: %d\n",PontosTurC1);

    printf("\n"); // Linha em branco para melhor visualização

    //exibindo os dados da carta 2 na tela
    printf("--carta 2:--\n");
    printf("Estado: %c\n",estadoC2);
    printf("Código: %s\n",CodigoC2);
    printf("Nome da Cidade: %s\n",NomeCidadeC2);      
    printf("População: %d\n",PopulacaoC2);
    printf("Área: %.2f Km²\n",AreaC2);
    printf("PIB: %.2f bilhoes de reais\n",PibC2);
    printf("Número de Pontos Turísticos: %d\n",PontosTurC2);

    
    return 0;
}
