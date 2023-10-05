# Projeto de Árvore de Busca Binária Balanceada em C++

## O que é uma Árvore de Busca Binária?

Uma Árvore de Busca Binária (BST - Binary Search Tree) é uma estrutura de dados em que cada nó tem no máximo dois filhos, um à esquerda e outro à direita. A característica fundamental de uma BST é que os valores armazenados em seus nós são organizados de forma que a busca seja eficiente. Os nós à esquerda de um nó contêm valores menores, e os nós à direita contêm valores maiores.

## Como Foi Feito o Balanceamento

Este projeto de árvore de busca binária simples implementa a inserção e a impressão em ordem da árvore, mas não inclui um mecanismo de balanceamento. A árvore gerada por este código pode não estar balanceada e pode se tornar desbalanceada à medida que novos elementos são inseridos.

Para alcançar o balanceamento em uma árvore de busca binária, algoritmos mais avançados, como a Árvore AVL ou a Árvore Vermelho-Negra, são necessários. Essas estruturas de dados incluem mecanismos de balanceamento que garantem que a árvore permaneça balanceada após inserções e remoções de elementos.

Para implementar o balanceamento, você pode pesquisar esses algoritmos e incorporar sua lógica ao código. O balanceamento é essencial para garantir que a árvore permaneça eficiente em termos de tempo de busca e não se torne desbalanceada.

## Como Compilar e Executar o Código

1. Certifique-se de que você tem um compilador C++ instalado no seu sistema, como o g++.

2. Abra um terminal e navegue até o diretório onde o código está localizado.

3. Compile o código usando o comando:

   ```bash
   g++ -o desafio04 main.cpp

4. Execute o programa com:

   ```bash
    ./desafio04

# Contribuições
Este é um projeto simples destinado a fornecer um ponto de partida para entender as Árvores de Busca Binária. Se você deseja implementar o balanceamento ou melhorar outras funcionalidades, sinta-se à vontade para contribuir para este projeto.