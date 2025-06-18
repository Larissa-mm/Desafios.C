# desafiosC

Este repositório contém os trabalhos e desafios desenvolvidos em linguagem C, como parte de estudos e projetos práticos.

---

## 🚢 Desafio de Batalha Naval em C

Este projeto é uma simulação em C do clássico jogo Batalha Naval. O objetivo é aplicar conceitos de matrizes, loops e condicionais para construir a lógica do jogo, evoluindo em três níveis de complexidade: Novato, Aventureiro e Mestre.

### Nível 1: Novato - O Tabuleiro e Navios Básicos

Nesta fase inicial, o foco foi criar a estrutura fundamental do jogo, utilizando uma matriz para o tabuleiro e posicionando navios com orientação simples.

* **Criação do Tabuleiro:** Utilização de uma matriz 10x10 para representar o campo de batalha, inicializada com o valor 0 para representar a água.
* **Posicionamento Simples:** Inclusão de dois navios de tamanho fixo (tamanho 3), um na vertical e outro na horizontal, representados pelo valor 3.
* **Exibição no Console:** Implementação de loops aninhados para exibir o estado do tabuleiro de forma clara, facilitando a visualização.

### Nível 2: Aventureiro - Tabuleiro Completo e Navios Diagonais

O segundo nível introduziu maior complexidade, exigindo o posicionamento de mais navios, incluindo aqueles com orientação diagonal.

* **Posicionamento Diagonal:** O desafio foi estendido para incluir quatro navios, sendo que dois deles devem ser posicionados na diagonal.
* **Lógica Diagonal:** Aplicação de lógica para posicionar navios onde a linha e a coluna são alteradas simultaneamente (ex: `tabuleiro[i][i]`).
* **Validação de Posições:** Implementação de verificações para garantir que todos os quatro navios não se sobreponham e permaneçam dentro dos limites do tabuleiro 10x10.

### Nível 3: Mestre - Habilidades Especiais e Áreas de Efeito

A etapa final do projeto focou na implementação de mecânicas avançadas, como habilidades especiais com diferentes áreas de efeito.

* **Matrizes de Habilidade:** Criação de matrizes separadas para representar as áreas de efeito de três habilidades distintas, usando 1 para área afetada e 0 para área não afetada.
* **Lógica das Habilidades:** Utilização de loops aninhados e condicionais para construir dinamicamente as formas das habilidades:
    * **Cone:** Uma área que se expande para baixo a partir de um ponto de origem.
    * **Cruz:** Afeta as posições em formato de cruz a partir de um ponto central.
    * **Octaedro:** Um formato de losango (vista frontal de um octaedro) centralizado em um ponto.
* **Sobreposição no Tabuleiro:** Implementação da lógica para sobrepor a matriz de habilidade no tabuleiro principal a partir de um ponto de origem, marcando a área de efeito com um valor distinto (ex: 5).

---

### Tecnologias Utilizadas

* Linguagem C

### Como Compilar e Executar

1.  **Pré-requisito:** Você precisa ter um compilador C, como o GCC, instalado em sua máquina.

2.  **Compilar o programa:**
    Abra um terminal na pasta do projeto e execute o seguinte comando:
    ```sh
    gcc nome_do_arquivo.c -o batalha_naval
    ```
    (Substitua `nome_do_arquivo.c` pelo nome do seu arquivo, por exemplo, `desafio_batalha_naval.c`)

3.  **Executar o programa:**
    Após a compilação, execute o arquivo gerado:
    ```sh
    ./batalha_naval
    ```