#include "Pessoa.h"

Pessoa::Pessoa(std::string nome) : nome(nome) {}

std::string Pessoa::getNome() const {
    return nome;
}

