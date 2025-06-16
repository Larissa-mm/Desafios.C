#include <stdio.h>
#include <string.h> // Adicionado para usar strcspn

//BUSCANDO CERCAR ERROS E TORNAR O CÓDIGO MAIS ROBUSTO UTILIZEI ESTRUTURA DE CONTROLE DO-WHILE 
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

    printf("Digite o código da carta(Sigla do estado + número de 01 a 04): ");
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

    
    //----NÍVEL MESTRE------
    int opcao1, opcao2;
    
    // --- Escolha do PRIMEIRO atributo ---
    do {
        printf("\n\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n");
        printf("Digite sua opção: ");
        resultadoScan = scanf("%d", &opcao1);
        if (resultadoScan != 1 || opcao1 < 1 || opcao1 > 5) {
            printf("Erro! Opção inválida. Tente novamente.\n");
            limparBuffer();
            resultadoScan = 0;
        }
    } while (resultadoScan != 1);
    limparBuffer(); // Limpa o buffer para a próxima leitura

    // --- Escolha do SEGUNDO atributo (Menu Dinâmico) ---
    do {
        printf("\n\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n");
        printf("Digite sua opção: ");
        resultadoScan = scanf("%d", &opcao2);
        if (resultadoScan != 1 || opcao2 < 1 || opcao2 > 5) {
            printf("Erro! Opção inválida. Tente novamente.\n");
            limparBuffer();
            resultadoScan = 0; 
        } else if (opcao1 == opcao2) { // Garante que não seja o mesmo atributo
            printf("Erro! Você não pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
            resultadoScan = 0; // Força a repetição do loop
        }
    } while (resultadoScan != 1);
    limparBuffer(); // Limpa o buffer final

    // --- Armazenando os valores e nomes dos atributos escolhidos ---
    float valorAttr1_C1, valorAttr1_C2, valorAttr2_C1, valorAttr2_C2;
    char nomeAttr1[30], nomeAttr2[30];

    // Switch para o primeiro atributo
    switch(opcao1) {
        case 1: valorAttr1_C1 = PopulacaoC1; valorAttr1_C2 = PopulacaoC2; strcpy(nomeAttr1, "População"); break;
        case 2: valorAttr1_C1 = AreaC1; valorAttr1_C2 = AreaC2; strcpy(nomeAttr1, "Área"); break;
        case 3: valorAttr1_C1 = PibC1; valorAttr1_C2 = PibC2; strcpy(nomeAttr1, "PIB"); break;
        case 4: valorAttr1_C1 = PontosTurC1; valorAttr1_C2 = PontosTurC2; strcpy(nomeAttr1, "Pontos Turísticos"); break;
        case 5: valorAttr1_C1 = DensidadePopulacionalC1; valorAttr1_C2 = DensidadePopulacionalC2; strcpy(nomeAttr1, "Densidade"); break;
    }

    // Switch para o segundo atributo
    switch(opcao2) {
        case 1: valorAttr2_C1 = PopulacaoC1; valorAttr2_C2 = PopulacaoC2; strcpy(nomeAttr2, "População"); break;
        case 2: valorAttr2_C1 = AreaC1; valorAttr2_C2 = AreaC2; strcpy(nomeAttr2, "Área"); break;
        case 3: valorAttr2_C1 = PibC1; valorAttr2_C2 = PibC2; strcpy(nomeAttr2, "PIB"); break;
        case 4: valorAttr2_C1 = PontosTurC1; valorAttr2_C2 = PontosTurC2; strcpy(nomeAttr2, "Pontos Turísticos"); break;
        case 5: valorAttr2_C1 = DensidadePopulacionalC1; valorAttr2_C2 = DensidadePopulacionalC2; strcpy(nomeAttr2, "Densidade"); break;
    }

    // --- Exibição dos Resultados ---
    printf("\n\n--- BATALHA FINAL ---\n");
    printf("⚔️  CARTA 1: %s  vs.  CARTA 2: %s  ⚔️\n\n", NomeCidadeC1, NomeCidadeC2);
    printf("Atributos escolhidos: %s e %s\n\n", nomeAttr1, nomeAttr2);

    // Exibindo valores e vencedor de cada atributo (usando operador ternário)
    printf("--- Comparação Individual ---\n");
    char* vencedor1 = (opcao1 == 5) ? (valorAttr1_C1 < valorAttr1_C2 ? NomeCidadeC1 : NomeCidadeC2) : (valorAttr1_C1 > valorAttr1_C2 ? NomeCidadeC1 : NomeCidadeC2);
    if (valorAttr1_C1 == valorAttr1_C2) {
        printf("%s: Carta 1 (%.2f) vs Carta 2 (%.2f) -> Empate\n", nomeAttr1, valorAttr1_C1, valorAttr1_C2);
    } else {
        printf("%s: Carta 1 (%.2f) vs Carta 2 (%.2f) -> Vencedor: %s\n", nomeAttr1, valorAttr1_C1, valorAttr1_C2, vencedor1);
    }

    char* vencedor2 = (opcao2 == 5) ? (valorAttr2_C1 < valorAttr2_C2 ? NomeCidadeC1 : NomeCidadeC2) : (valorAttr2_C1 > valorAttr2_C2 ? NomeCidadeC1 : NomeCidadeC2);
    if (valorAttr2_C1 == valorAttr2_C2) {
        printf("%s: Carta 1 (%.2f) vs Carta 2 (%.2f) -> Empate\n", nomeAttr2, valorAttr2_C1, valorAttr2_C2);
    } else {
        printf("%s: Carta 1 (%.2f) vs Carta 2 (%.2f) -> Vencedor: %s\n", nomeAttr2, valorAttr2_C1, valorAttr2_C2, vencedor2);
    }

    // --- Soma e Vencedor Final ---
    printf("\n--- Soma e Resultado Final ---\n");
    float somaC1 = valorAttr1_C1 + valorAttr2_C1;
    float somaC2 = valorAttr1_C2 + valorAttr2_C2;

    printf("Soma Carta 1 (%s): %.2f\n", NomeCidadeC1, somaC1);
    printf("Soma Carta 2 (%s): %.2f\n", NomeCidadeC2, somaC2);
    
    //Utilizei emojis pra deixar o resultado mais bonito para o usuário
    if (somaC1 > somaC2) {
        printf("\n🎉 VENCEDOR DA RODADA: Carta 1 (%s)!\n", NomeCidadeC1);
    } else if (somaC2 > somaC1) {
        printf("\n🎉 VENCEDOR DA RODADA: Carta 2 (%s)!\n", NomeCidadeC2);
    } else {
        printf("\n🏁 A RODADA TERMINOU EM EMPATE!\n");
    }
    
    return 0;
}