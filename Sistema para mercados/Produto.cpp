#include "Produto.h"

Produto::Produto(const std::string& nome, double preco, int quantidadeEmEstoque)
    : nome(nome), preco(preco), quantidadeEmEstoque(quantidadeEmEstoque) {}

std::string Produto::getNome() const {
    return nome;
}

double Produto::getPreco() const {
    return preco;
}

int Produto::getQuantidadeEmEstoque() const {
    return quantidadeEmEstoque;
}

void Produto::adicionarQuantidade(int quantidade) {
    quantidadeEmEstoque += quantidade;
}

void Produto::removerQuantidade(int quantidade) {
    if (quantidadeEmEstoque >= quantidade) {
        quantidadeEmEstoque -= quantidade;
    }
}

