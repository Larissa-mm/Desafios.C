# Projeto 2: Super Trunfo Lógica - Batalha de Atributos em C

Este projeto documenta a criação de um jogo **Super Trunfo** em C, com foco na implementação de lógicas de comparação complexas, menus interativos e tratamento de erros, evoluindo através de três níveis de desafio.

---
## Visão Geral do Projeto

O objetivo deste desafio foi desenvolver um programa em C que simula uma rodada do jogo Super Trunfo, permitindo que o usuário cadastre os dados de duas cartas e, em seguida, escolha os atributos para a batalha. O projeto enfatiza o uso de **estruturas de decisão** (`if-else`, `switch`, operador ternário), a criação de **menus interativos** e a implementação de uma **validação de entrada robusta** para criar uma experiência de usuário segura e intuitiva.

### Funcionalidades Principais

* **Cadastro de Cartas:** Permite a inserção de dados para duas cartas, incluindo atributos como Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos.
* **Validação de Entrada:** O programa é robusto contra erros do usuário, como digitar texto em vez de números ou inserir valores inválidos (ex: população negativa). O usuário é solicitado a corrigir a entrada até que ela seja válida.
* **Menus Interativos:** O jogador escolhe os atributos para a comparação através de um menu de fácil utilização.
* **Lógica de Comparação Múltipla:** Na fase final, o programa permite a escolha de dois atributos distintos, compara-os individualmente e, em seguida, soma seus valores para determinar o vencedor da rodada.
* **Regras Especiais:** Implementa a regra de que, para o atributo "Densidade Populacional", o menor valor vence.

---
## Níveis do Desafio

O desenvolvimento do projeto foi estruturado em três fases progressivas:

### Nível 1: Novato - A Primeira Comparação

* **Objetivo:** Introduzir a lógica de comparação.
* **Implementação:** Após o cadastro das duas cartas, o programa realizava uma comparação baseada em um **único atributo pré-definido no código**. A estrutura `if-else if-else` foi utilizada para determinar o vencedor (Carta 1, Carta 2 ou Empate) e exibir o resultado.

### Nível 2: Aventureiro - O Poder da Escolha

* **Objetivo:** Adicionar interatividade ao jogo.
* **Implementação:** Foi introduzido um **menu interativo** que permitia ao jogador escolher qual atributo usar na batalha. A estrutura `switch-case` foi usada para direcionar o fluxo do programa para o bloco de comparação correto, com base na escolha do usuário. A validação de entrada foi aprimorada para garantir que apenas opções válidas do menu fossem aceitas.

### Nível 3: Mestre - Estratégia Dupla

* **Objetivo:** Criar uma lógica de jogo avançada e sofisticada.
* **Implementação:** Esta é a versão final e mais complexa.
    * O jogador agora escolhe **dois atributos distintos** para a comparação.
    * O menu de escolha do segundo atributo é "dinâmico", impedindo que o jogador selecione o mesmo atributo duas vezes.
    * O **operador ternário (`? :`)** é utilizado para determinar o vencedor de cada comparação individual de forma mais elegante.
    * O resultado final da rodada é decidido pela **soma dos valores** dos dois atributos escolhidos para cada carta, com a maior soma vencendo.

---
## Atributos Disponíveis para Comparação

O jogador pode escolher entre os seguintes atributos para a batalha:

1.  **População** (maior valor vence)
2.  **Área** (maior valor vence)
3.  **PIB** (maior valor vence)
4.  **Pontos Turísticos** (maior valor vence)
5.  **Densidade Populacional** (MENOR valor vence)

---
## Como Compilar e Executar

Para compilar e executar este programa, você precisará de um compilador C, como o GCC.

1.  **Salvar o Código:** Salve o código-fonte com o nome **`logicaSuperTrunfo.C`**.

2.  **Abrir o Terminal:** Abra um terminal ou prompt de comando.

3.  **Compilar:** Navegue até a pasta onde você salvou o arquivo e execute o seguinte comando:
    ```bash
    gcc logicaSuperTrunfo.C -o logicasuper_trunfo
    ```
    *(Este comando compila `logicaSuperTrunfo.C` e cria um arquivo executável chamado `logicasuper_trunfo`)*

4.  **Executar:**
    * No Linux ou macOS:
        ```bash
        ./logicasuper_trunfo
        ```
    * No Windows:
        ```bash
        logicasuper_trunfo.exe
        ```

---
## Exemplo de Uso (Nível Mestre)

A seguir, um exemplo de como interagir com o programa na sua versão final:

--- Insira os dados da Carta 1 ---
Digite a sigla do Estado (ex: SP): SP
Digite o nome da Cidade: Sao Paulo
Digite a População: 12300000
... (restante dos dados)

--- Insira os dados da Carta 2 ---
Digite a sigla do Estado (ex: RJ): RJ
Digite o nome da Cidade: Rio de Janeiro
Digite a População: 6700000
... (restante dos dados)


--- ESCOLHA O PRIMEIRO ATRIBUTO ---
1. População
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Populacional
Digite sua opção: 3

--- ESCOLHA O SEGUNDO ATRIBUTO ---
1. População
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Populacional
Digite sua opção: 3
Erro! Você não pode escolher o mesmo atributo duas vezes. Tente novamente.

--- ESCOLHA O SEGUNDO ATRIBUTO ---
...
Digite sua opção: 1


--- BATALHA FINAL ---
⚔️  CARTA 1: Sao Paulo  vs.  CARTA 2: Rio de Janeiro  ⚔️

Atributos escolhidos: PIB e População

--- Comparação Individual ---
PIB: Carta 1 (780.00) vs Carta 2 (350.00) -> Vencedor: Sao Paulo
População: Carta 1 (12300000.00) vs Carta 2 (6700000.00) -> Vencedor: Sao Paulo

--- Soma e Resultado Final ---
Soma Carta 1 (Sao Paulo): 12300780.00
Soma Carta 2 (Rio de Janeiro): 6700350.00

🎉 VENCEDOR DA RODADA: Carta 1 (Sao Paulo)!