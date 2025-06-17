# desafiosC

Este repositório contém os trabalhos e desafios desenvolvidos em linguagem C, como parte de estudos e projetos práticos.

---

## ♟️ Desafio de Xadrez em C

Este projeto consiste em um programa em C que simula a movimentação de peças de xadrez. O objetivo principal é aplicar diferentes estruturas de repetição e conceitos de programação, evoluindo em complexidade através de três níveis: Novato, Aventureiro e Mestre.

### Nível 1: Novato - Movimentos Básicos com Loops Simples

Nesta fase inicial, o foco foi utilizar as estruturas de repetição fundamentais da linguagem C para simular um número fixo de movimentos para as peças mais simples.

* **Torre:** Movimento de 5 casas para a direita, implementado com um loop `for`.
* **Bispo:** Movimento de 5 casas na diagonal (Cima + Direita), implementado com um loop `do-while`.
* **Rainha:** Movimento de 8 casas para a esquerda, implementado com um loop `while`.

### Nível 2: Aventureiro - O Movimento em "L" do Cavalo

O segundo nível introduziu um desafio de lógica, exigindo a simulação de um movimento específico do Cavalo através de uma estrutura de loops aninhados.

* **Cavalo:** Simulação do movimento "2 casas para baixo e 1 para a esquerda".
* **Conceitos Aplicados:** Utilização de um loop `while` externo para controlar a execução única do movimento, contendo um loop `for` aninhado para realizar os passos, cumprindo os requisitos do desafio.

### Nível 3: Mestre - Técnicas Avançadas

A etapa final do projeto substituiu as implementações anteriores por técnicas mais avançadas e eficientes, demonstrando maior domínio da linguagem.

* **Recursividade (Torre, Bispo e Rainha):**
    * Os loops `for`, `while` e `do-while` do Nível Novato foram substituídos por **funções recursivas**. Cada função chama a si mesma para simular o número de passos de cada peça, oferecendo uma solução mais elegante.

* **Loops Complexos (Cavalo):**
    * A lógica do Cavalo foi aprimorada para o movimento "2 casas para cima e 1 para a direita".
    * A implementação utilizou um **loop `for` com condição múltipla (`||`)** e múltiplas variáveis de controle, que são atualizadas de forma condicional dentro do loop.

* **Loops Aninhados (Bispo):**
    * Uma **segunda implementação** para o Bispo foi criada, utilizando uma estrutura de loops aninhados para simular o movimento diagonal, conforme especificado no desafio.

---

### Tecnologias Utilizadas

* Linguagem C

### Como Compilar e Executar

1.  **Pré-requisito:** Você precisa ter um compilador C, como o GCC, instalado em sua máquina.

2.  **Compilar o programa:**
    Abra um terminal na pasta do projeto e execute o seguinte comando:
    ```sh
    gcc nome_do_arquivo.c -o xadrez
    ```
    (Substitua `nome_do_arquivo.c` pelo nome do seu arquivo, por exemplo, `desafio_xadrez.c`)

3.  **Executar o programa:**
    Após a compilação, execute o arquivo gerado:
    ```sh
    ./xadrez
    ```