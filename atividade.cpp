#include <iostream>
#include <stack>

void removeMiddleElement(std::stack<int> &s, int currentSize, int middlePos) {
    std::stack<int> tempStack;
    for (int i = 0; i < middlePos - 1; i++) {
        tempStack.push(s.top());
        s.pop();
    }
    s.pop();
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    std::stack<int> minhaPilha;
    minhaPilha.push(1);
    minhaPilha.push(2);
    minhaPilha.push(3);
    minhaPilha.push(4);
    minhaPilha.push(5);

    int tamanhoAtual = minhaPilha.size();
    int posicaoMeio = tamanhoAtual / 2 + 1;

    removeMiddleElement(minhaPilha, tamanhoAtual, posicaoMeio);

    while (!minhaPilha.empty()) {
        std::cout << minhaPilha.top() << " ";
        minhaPilha.pop();
    }

    return 0;
}

