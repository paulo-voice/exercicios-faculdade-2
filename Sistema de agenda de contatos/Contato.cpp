#include "Contato.h"

Contato::Contato(const std::string& nome, const std::string& telefone)
    : nome(nome), telefone(telefone) {}

std::string Contato::getNome() const {
    return nome;
}

std::string Contato::getTelefone() const {
    return telefone;
}

