#include <iostream>

// Definição da estrutura do nó da árvore
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Função para inserir um nó na árvore
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Função para imprimir a árvore em ordem
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        std::cout << root->data << " ";
        inOrder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Inserindo elementos na árvore
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);

    // Imprimindo a árvore em ordem
    std::cout << "Árvore balanceada em ordem: ";
    inOrder(root);
    std::cout << std::endl;

    // Você pode adicionar sua lógica de balanceamento aqui

    return 0;
}
