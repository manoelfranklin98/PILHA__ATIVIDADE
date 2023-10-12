// questao 2 
#include <iostream>
#include <stack>

void inserirNoFundo(std::stack<int> &pilha, int item) {
    if (pilha.empty()) {
        pilha.push(item);
    } else {
        int temp = pilha.top();
        pilha.pop();
        inserirNoFundo(pilha, item);
        pilha.push(temp);
    }
}

void reverterPilha(std::stack<int> &pilha) {
    if (!pilha.empty()) {
        int temp = pilha.top();
        pilha.pop();
        reverterPilha(pilha);
        inserirNoFundo(pilha, temp);
    }
}

int main() {
    std::stack<int> minhaPilha;

    minhaPilha.push(1);
    minhaPilha.push(2);
    minhaPilha.push(3);
    minhaPilha.push(4);
    minhaPilha.push(5);

    reverterPilha(minhaPilha);

    while (!minhaPilha.empty()) {
        std::cout << minhaPilha.top() << " ";
        minhaPilha.pop();
    }

    return 0;
}

