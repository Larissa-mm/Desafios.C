#include <stdio.h>

int main(){
    //declaração de variaveís  da carta 1
    char estadoC1[2] ;// para armazenar as letras de A a H dos oito estados
    char CodigoC1[5];//variavel para armazenar Codigo da carta
    char NomeCidadeC1 [50];//variavel para armazenar nome da cidade
    int PopulacaoC1;// para armazenar dados de população
    float AreaC1;//armazena dados da area  da cidade em km²
    float PibC1;//armazena o pib da cidade
    int PontosTurC1;//armazena quantidade de pontos turisticos
    float DensidadePopulacionalC1; //variável para densidade populacional
    float PibPerCapitaC1; //variável para PIB per capita
    float SuperPoderC1;//variavel para armazenar o poder da carta 1


    //declaração variaveís da carta 2
    char estadoC2[2] ;// letra  de A a H dos oito estados
    char CodigoC2[5];//variavel para armazenar Codigo da carta
    char NomeCidadeC2[50];//variavel para armazenar nome da cidade
    int PopulacaoC2;// para armazenar dados de população
    float AreaC2;//armazena dados da area  da cidade em km²
    float PibC2;//armazena o pib da cidade
    int PontosTurC2;//armazena quantidade de pontos turisticos
    float DensidadePopulacionalC2; //variável para densidade populacional
    float PibPerCapitaC2; //variável para PIB per capita
    float SuperPoderC2;//variavel para armazenar o poder da carta 2



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
    printf("Digite o PIB da cidade em  bilhões reais: ");
    scanf(" %f",&PibC1);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d",&PontosTurC1);

    // Calculando Densidade Populacional e PIB per Capita da  Carta 1
    DensidadePopulacionalC1 = (float)PopulacaoC1 / AreaC1;// float para garantir o type casting
    PibPerCapitaC1 = (PibC1 * 1000000000.0f) / PopulacaoC1;/* Multiplica o PIB por 1 bilhão  para ajustar 
    as unidades e garantir que o calculo per capita seja correto em relação ao valor em reais por habitante.*/
     // Cálculo do Super Poder para Carta 1
    // conversão para float para garantir a soma correta
    SuperPoderC1 = (float)PopulacaoC1 + AreaC1 + PibC1 + (float)PontosTurC1 + PibPerCapitaC1 + 
    (1.0f / DensidadePopulacionalC1);

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
    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf(" %f",&PibC2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d",&PontosTurC2);

     // Calculando Densidade Populacional e PIB per Capita da  Carta 2
    DensidadePopulacionalC2 =(float) PopulacaoC2 / AreaC2;//float para garantir o type casting
    PibPerCapitaC2 = (PibC2 * 1000000000.0f) / PopulacaoC2; /* Multiplica o PIB por 1 bilhão  para ajustar 
    as unidades e garantir que o calculo per capita seja correto em relação ao valor em reais por habitante.*/
    // Cálculo do Super Poder para Carta 2
    // conversão para float para garantir a soma correta
    SuperPoderC2 = (float)PopulacaoC2 + AreaC2 + PibC2+ (float)PontosTurC2 + PibPerCapitaC2 + 
    (1.0f / DensidadePopulacionalC2);

    printf("\n"); // Linha em branco para melhor visualização


    //exibindo os dados da carta 1 na tela 
    printf("--carta 1:--\n");
    printf("Estado: %c\n",estadoC1);
    printf("Código: %s\n",CodigoC1);
    printf("Nome da Cidade: %s\n",NomeCidadeC1);      
    printf("População: %d\n",PopulacaoC1);
    printf("Área: %.2f Km²\n",AreaC1);
    printf("PIB: %.2f bilhoes de reais\n",PibC1);
    printf("Número de Pontos Turísticos: %d\n",PontosTurC1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacionalC1);
    printf("PIB per Capita: %.2f reais\n", PibPerCapitaC1);


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
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacionalC2);
    printf("PIB per Capita: %.2f reais\n", PibPerCapitaC2);
    
    printf("--- Comparação de Cartas (Atributo: PIB) ---\n\n");
    // Exibe os valores das cartas para o atributo comparado
    printf("Carta 1 - %s:\n", NomeCidadeC1,PibC1);
    printf("Carta 2 - %s:\n", NomeCidadeC2,PibC2);
    printf("\n"); // Linha em branco para melhor visualização

    if (PibC1 > PibC2) {
         printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidadeC1);
    }
    else
    {
         printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidadeC2);
    }
    
    return 0;
}