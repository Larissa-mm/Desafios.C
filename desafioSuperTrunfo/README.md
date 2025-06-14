
# Projeto 1: Super Trunfo em C

Este README.md detalha o primeiro grande projeto da disciplina: a criação de um jogo **Super Trunfo em C**.

---
## Visão Geral do Projeto

Este projeto aborda a criação e gerenciamento de cartas para um jogo de "Super Trunfo" temático, progredindo em complexidade através de três níveis de desafio. O objetivo é aplicar conceitos fundamentais de programação em C, como variáveis, tipos de dados, operações de entrada/saída e manipulação de dados, com restrições específicas para cada nível.

### Níveis do Desafio do Super Trunfo

O desenvolvimento foi estruturado nas seguintes fases:

#### Nível Novato (Básico): Cadastro Inicial

* **Objetivo:** Foco na entrada e exibição de dados básicos para duas cartas.
* **Atributos:** Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos.
* **Implementação:** A ênfase foi no uso correto de variáveis e funções de I/O (`printf`, `scanf`), sem o uso de estruturas de controle.

#### Nível Aventureiro (Intermediário): Cálculos de Atributos

* **Objetivo:** Adicionar cálculos de atributos derivados a partir dos dados básicos.
* **Novos Atributos Calculados:**
    * **Densidade Populacional:** `População / Área` (habitantes/km²).
    * **PIB per Capita:** `PIB (em bilhões) * 1.000.000.000 / População`.
* **Implementação:** Os resultados foram formatados para exibir duas casas decimais. A restrição de não usar estruturas de repetição ou decisão (`if/else`) foi mantida.

#### Nível Mestre (Avançado): Batalha de Cartas e Super Poder

* **Objetivo:** Introduzir a lógica de comparação entre as cartas e um atributo final de poder.
* **Melhorias e Novidades:**
    * **Tipo de Dado de População:** Alterado para `unsigned long int` (`%lu`) para suportar valores maiores.
    * **Cálculo do "Super Poder":** Um atributo que soma todos os valores numéricos da carta: `População + Área + PIB + Pontos Turísticos + PIB per Capita + (1.0f / Densidade Populacional)`. O inverso da densidade foi usado para bonificar cartas de cidades menos densas. Foi dada atenção especial à conversão de tipos (`(float)`) para garantir a precisão na soma.
    * **Regras de Comparação:** A densidade populacional segue a regra inversa (menor valor vence), enquanto todos os outros atributos, incluindo o Super Poder, seguem a regra padrão (maior valor vence).

### Técnica de Comparação sem Estruturas de Controle

Para exibir qual carta venceu em cada atributo **sem usar blocos `if/else` ou o operador ternário (`? :`)**, foi empregada uma técnica de **indexação de array**.

A lógica funciona da seguinte forma:

1.  Uma expressão de comparação em C, como `PopulacaoC1 > PopulacaoC2`, avalia para um valor inteiro: `1` se a condição for verdadeira, e `0` se for falsa.
2.  Um array de strings é pré-definido com as duas mensagens de resultado possíveis: `{"Carta 2 venceu", "Carta 1 venceu"}`.
3.  O resultado da comparação (`0` ou `1`) é então usado como um índice para acessar esse array, selecionando dinamicamente a string correta a ser exibida.

**Exemplo Prático da Aplicação:**

```c
// 1. O array com as mensagens de vitória é declarado.
//    Índice 0 = Resultado Falso (Carta 2 vence)
//    Índice 1 = Resultado Verdadeiro (Carta 1 vence)
char* mensagensVitoria[] = {"Carta 2 venceu", "Carta 1 venceu"};

// 2. A comparação retorna 0 ou 1, que é armazenado em uma variável.
int vitoriaC1_Pop = PopulacaoC1 > PopulacaoC2;

// 3. A variável (com valor 0 ou 1) é usada para selecionar a mensagem no array
//    e também para imprimir o resultado numérico da comparação.
printf("População: %s (%d)\n", mensagensVitoria[vitoriaC1_Pop], vitoriaC1_Pop);