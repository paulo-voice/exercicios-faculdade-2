#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <iostream>

class Produto {
private:
    std::string nome;
    double preco;
    int quantidadeEmEstoque;

public:
    Produto(const std::string& nome, double preco, int quantidadeEmEstoque);
    
    // Getters
    std::string getNome() const;
    double getPreco() const;
    int getQuantidadeEmEstoque() const;
    
    // Métodos para atualizar a quantidade em estoque
    void adicionarQuantidade(int quantidade);
    void removerQuantidade(int quantidade);
};

#endif

