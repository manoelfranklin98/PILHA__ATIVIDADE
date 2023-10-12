#include <iostream>
#include <stack>
#include <string>


std::string reverterString(const std::string& input) {
    std::stack<char> pilha;
    std::string resultado;

    for (size_t i = 0; i < input.size(); i++) {
        pilha.push(input[i]);
    }

    while (!pilha.empty()) {
        resultado += pilha.top();
        pilha.pop();
    }

    return resultado;
}

int main() {
    std::string texto = " f   r   a   n   k   l   i   n ";

    std::string textoRevertido = reverterString(texto);

    std::cout << "NOME ORIGINAL  : " << texto << std::endl;
    std::cout << "NOME REVERTIDO : " << textoRevertido << std::endl;

    return 0;
}

