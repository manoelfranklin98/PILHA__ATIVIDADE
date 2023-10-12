#include <iostream>

const int TAMANHO_MAXIMO_PILHA = 10; 

class PilhaFixa {
public:
    PilhaFixa() : topo(-1) {}

    void push(int valor) {
        if (!isFull()) {
            elementos[++topo] = valor;
        } else {
            std::cout << "A pilha está cheia. Não é possível adicionar mais elementos." << std::endl;
        }
    }

    void pop() {
        if (!isEmpty()) {
            topo--;
        } else {
            std::cout << "A pilha está vazia. Não é possível remover elementos." << std::endl;
        }
    }

    int top() {
        if (!isEmpty()) {
            return elementos[topo];
        } else {
            std::cout << "A pilha está vazia." << std::endl;
            return -1; 
        }
    }

    bool isFull() {
        return topo ==  TAMANHO_MAXIMO_PILHA - 1;
    }

    bool isEmpty() {
        return topo == -1;
    }

private:
    int elementos[ TAMANHO_MAXIMO_PILHA];
    int topo;
};

int main() {
    PilhaFixa pilha;

    for (int i = 1; i <= 10; i++) {
        pilha.push(i);
    }

    std::cout << "O ELEMNETO NO TOPO DA PILHA VAI SER: " << pilha.top() << std::endl;

    pilha.pop();
    pilha.pop();

    std::cout << "ESSE VAI SER O ELEMENTO QUANDO FOR REMOVIDO O TOPO DA LISTA : " << pilha.top() << std::endl;

    pilha.push(42);

    return 0;
}

