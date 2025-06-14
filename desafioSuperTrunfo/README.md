Este README.md detalha o primeiro grande projeto: o **Super Trunfo em C**.

---

## Projeto 1: Super Trunfo em C

Este projeto específico aborda a criação e gerenciamento de cartas para um jogo de "Super Trunfo" temático, progredindo em complexidade através de três níveis de desafio.

### Níveis do Desafio do Super Trunfo

O desenvolvimento do Super Trunfo foi estruturado em fases:

#### Nível Novato (Básico): Cadastro Inicial

Foco na entrada e exibição de dados básicos para duas cartas, incluindo Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos. A ênfase foi no uso correto de variáveis e funções de I/O (`printf`, `scanf`), sem estruturas de controle.

#### Nível Aventureiro (Intermediário): Cálculos de Atributos

Nesta fase, foram adicionados cálculos de atributos derivados:

* **Densidade Populacional:** População / Área (habitantes/km²).
* **PIB per Capita:** PIB (em bilhões de reais, multiplicado por 1 bilhão) / População.

Os resultados foram formatados com duas casas decimais. Mantida a restrição de não usar estruturas de repetição ou decisão (`if/else`).

#### Nível Mestre (Avançado): Batalha de Cartas e Super Poder

O desafio final introduziu a lógica de comparação e um novo atributo:

* **População:** Alterada para `unsigned long int` (`%lu`) para suportar grandes valores.
* **Cálculo do "Super Poder":** Uma soma de todos os atributos numéricos da carta: `População + Área + PIB + Pontos Turísticos + PIB per Capita + (1.0f / Densidade Populacional)`. O inverso da densidade bonifica cartas menos densas. Houve atenção na conversão de tipos (`(float)`) para garantir precisão nas somas.
* **Comparação de Cartas sem `if-else`:** As cartas são comparadas atributo por atributo. A densidade populacional tem a regra inversa (menor valor vence), enquanto os demais atributos (incluindo Super Poder) seguem a regra padrão (maior valor vence).

    **Uso do Operador Ternário para Comparações:**
    Para exibir qual carta venceu (ex: "Carta 1 venceu") e o resultado booleano (`1` para verdadeiro - Carta 1 venceu, `0` para falso - Carta 2 venceu) **sem usar blocos `if/else`**, foi empregado o operador condicional ternário `? :`.

    **Exemplo da aplicação:**
    ```c
    printf("População: %s (%d)\n", (PopulacaoC1 > PopulacaoC2 ? "Carta 1 venceu" : "Carta 2 venceu"), PopulacaoC1 > PopulacaoC2);
    ```
    Neste formato, a primeira parte (`PopulacaoC1 > PopulacaoC2 ? "Carta 1 venceu" : "Carta 2 venceu"`) decide qual string será impressa (ex: "Carta 1 venceu"). A segunda parte (`PopulacaoC1 > PopulacaoC2`) é uma expressão booleana que, em C, avalia para `1` (verdadeiro) ou `0` (falso), sendo impressa entre parênteses para indicar o resultado da comparação.