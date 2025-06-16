#include <stdio.h>
#include <string.h> // Adicionado para usar strcspn
//Nesse nivel busquei cercar os erros que o usuário possa cometer.
// Função auxiliar para limpar o "lixo" do teclado. Essencial.
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    char estadoC1[3];
    char CodigoC1[5];
    char NomeCidadeC1[50];
    int PopulacaoC1;
    float AreaC1;
    float PibC1;
    int PontosTurC1;
    float DensidadePopulacionalC1;

    char estadoC2[3];
    char CodigoC2[5];
    char NomeCidadeC2[50];
    int PopulacaoC2;
    float AreaC2;
    float PibC2;
    int PontosTurC2;
    float DensidadePopulacionalC2;

    int resultadoScan; 

    // --- INSERINDO OS DADOS DA CARTA 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");
    printf("Digite o Estado (sigla com 2 letras): ");
    scanf("%2s", estadoC1); 

    printf("Digite o código da carta(Sigla do estado + número de 01 a 04:) ");
    scanf("%4s", CodigoC1);

    // Limpando o buffer ANTES de ler o nome com espaços 
    limparBuffer(); 
    
    // Usando fgets para ler o nome da cidade
    printf("Digite o nome da Cidade: ");
    fgets(NomeCidadeC1, 50, stdin);
    NomeCidadeC1[strcspn(NomeCidadeC1, "\n")] = '\0'; // Remove o '\n' do final

    // Validação da População
    do {
        printf("Digite o número de habitantes da cidade: ");
        resultadoScan = scanf("%d", &PopulacaoC1);
        if (resultadoScan != 1 || PopulacaoC1 <= 0) {
            printf("Erro! Digite um número inteiro e positivo.\n");
            limparBuffer();
        }
    } while (resultadoScan != 1 || PopulacaoC1 <= 0);

    // Validação da Área
    do {
        printf("Digite a área da cidade em Km²: ");
        resultadoScan = scanf("%f", &AreaC1);
        if (resultadoScan != 1 || AreaC1 <= 0) {
            printf("Erro! Digite um número decimal e positivo.\n");
            limparBuffer();
        }
    } while (resultadoScan != 1 || AreaC1 <= 0);
    
    // Validação do PIB
    do {
        printf("Digite o PIB da cidade em bilhões reais: ");
        resultadoScan = scanf("%f", &PibC1);
        if (resultadoScan != 1 || PibC1 <= 0) {
            printf("Erro! Digite um número decimal e positivo.\n");
            limparBuffer();
        }
    } while (resultadoScan != 1 || PibC1 <= 0);

    // Validação dos Pontos Turísticos
    do {
        printf("Digite a quantidade de pontos turísticos da cidade: ");
        resultadoScan = scanf("%d", &PontosTurC1);
        if (resultadoScan != 1 || PontosTurC1 < 0) { 
            printf("Erro! Digite um número inteiro e não-negativo.\n");
            limparBuffer();
        }
    } while (resultadoScan != 1 || PontosTurC1 < 0);


    // --- INSERINDO OS DADOS DA CARTA 2 ---
    printf("\n--- Insira os dados da Carta 2 ---\n");
    printf("Digite o Estado (sigla com 2 letras): ");
    scanf("%2s", estadoC2);
    printf("Digite o código da carta(Sigla do estado + número de 01 a 04): ");
    scanf("%4s", CodigoC2);
    
    //  Limpando o buffer denovo
    limparBuffer();
    
    // Usando fgets para a segunda cidade 
    printf("Digite o nome da Cidade: ");
    fgets(NomeCidadeC2, 50, stdin);
    NomeCidadeC2[strcspn(NomeCidadeC2, "\n")] = '\0';

    // Repetindo as validações para a Carta 2
    do {
        printf("Digite o número de habitantes da cidade: ");
        resultadoScan = scanf("%d", &PopulacaoC2);
        if (resultadoScan != 1 || PopulacaoC2 <= 0) {
            printf("Erro! Digite um número inteiro e positivo.\n");
            limparBuffer();
        }
    } while (resultadoScan != 1 || PopulacaoC2 <= 0);

    do {
        printf("Digite a área da cidade em Km²: ");
        resultadoScan = scanf("%f", &AreaC2);
        if (resultadoScan != 1 || AreaC2 <= 0) {
            printf("Erro! Digite um número decimal e positivo.\n");
            limparBuffer();
        }
    } while (resultadoScan != 1 || AreaC2 <= 0);

    do {
        printf("Digite o PIB da cidade em bilhões reais: ");
        resultadoScan = scanf("%f", &PibC2);
        if (resultadoScan != 1 || PibC2 <= 0) {
            printf("Erro! Digite um número decimal e positivo.\n");
            limparBuffer();
        }
    } while (resultadoScan != 1 || PibC2 <= 0);
    
    do {
        printf("Digite a quantidade de pontos turísticos da cidade: ");
        resultadoScan = scanf("%d", &PontosTurC2);
        if (resultadoScan != 1 || PontosTurC2 < 0) {
            printf("Erro! Digite um número inteiro e não-negativo.\n");
            limparBuffer();
        }
    } while (resultadoScan != 1 || PontosTurC2 < 0);


    //CÁLCULOS
    DensidadePopulacionalC1 = (float)PopulacaoC1 / AreaC1;
    DensidadePopulacionalC2 = (float)PopulacaoC2 / AreaC2;

    // --- LÓGICA DO NÍVEL AVENTUREIRO COM MENU ---
    int opcao;
    
    // Validação da opção do menu
    do {
        printf("\n\n--- MENU DE COMPARAÇÃO ---\n");
        printf("Escolha o atributo para a batalha:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional (menor vence)\n");
        printf("Digite sua opção: ");
        
        resultadoScan = scanf("%d", &opcao);
        if (resultadoScan != 1 || opcao < 1 || opcao > 5) {
            printf("Erro! Opção inválida. Tente novamente.\n");
            limparBuffer();
            resultadoScan = 0; // Força a repetição do loop
        }
    } while (resultadoScan != 1);

    switch (opcao) {
        //opções para o usuario
        case 1:
            printf("\n--- Atributo: População ---\n");
            printf("Carta 1 (%s): %d\n", NomeCidadeC1, PopulacaoC1);
            printf("Carta 2 (%s): %d\n", NomeCidadeC2, PopulacaoC2);
            if (PopulacaoC1 > PopulacaoC2) printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidadeC1);
            else if (PopulacaoC2 > PopulacaoC1) printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidadeC2);
            else printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("\n--- Atributo: Área ---\n");
            printf("Carta 1 (%s): %.2f Km²\n", NomeCidadeC1, AreaC1);
            printf("Carta 2 (%s): %.2f Km²\n", NomeCidadeC2, AreaC2);
            if (AreaC1 > AreaC2) printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidadeC1);
            else if (AreaC2 > AreaC1) printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidadeC2);
            else printf("Resultado: Empate!\n");
            break;
        case 3:
            printf("\n--- Atributo: PIB ---\n");
            printf("Carta 1 (%s): R$ %.2f bilhões\n", NomeCidadeC1, PibC1);
            printf("Carta 2 (%s): R$ %.2f bilhões\n", NomeCidadeC2, PibC2);
            if (PibC1 > PibC2) printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidadeC1);
            else if (PibC2 > PibC1) printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidadeC2);
            else printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("\n--- Atributo: Pontos Turísticos ---\n");
            printf("Carta 1 (%s): %d\n", NomeCidadeC1, PontosTurC1);
            printf("Carta 2 (%s): %d\n", NomeCidadeC2, PontosTurC2);
            if (PontosTurC1 > PontosTurC2) printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidadeC1);
            else if (PontosTurC2 > PontosTurC1) printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidadeC2);
            else printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("\n--- Atributo: Densidade Populacional ---\n");
            printf("Carta 1 (%s): %.2f hab/Km²\n", NomeCidadeC1, DensidadePopulacionalC1);
            printf("Carta 2 (%s): %.2f hab/Km²\n", NomeCidadeC2, DensidadePopulacionalC2);
            if (DensidadePopulacionalC1 < DensidadePopulacionalC2) printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidadeC1);
            else if (DensidadePopulacionalC2 < DensidadePopulacionalC1) printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidadeC2);
            else printf("Resultado: Empate!\n");
            break;
        default:
          printf("Ocorreu um erro inesperado no menu.\n");
          break;
    }
    return 0;
}