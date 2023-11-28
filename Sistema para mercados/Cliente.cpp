#include "Cliente.h"

Cliente::Cliente(const std::string& nome)
    : nome(nome) {}

std::string Cliente::getNome() const {
    return nome;
}

