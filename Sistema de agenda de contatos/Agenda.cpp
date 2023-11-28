#include "Agenda.h"
#include <iostream>

Agenda::Agenda() {}

bool Agenda::adicionarContato(const Contato& contato) {
    if (contatos.size() < 30) {
        contatos.push_back(contato);
        return true;
    }
    return false; // A agenda está cheia
}

bool Agenda::removerContato(const std::string& nome) {
    for (auto it = contatos.begin(); it != contatos.end(); ++it) {
        if (it->getNome() == nome) {
            contatos.erase(it);
            return true;
        }
    }
    return false; // Contato não encontrado
}

void Agenda::listarContatos() const {
    for (const auto& contato : contatos) {
        std::cout << "Nome: " << contato.getNome() << ", Telefone: " << contato.getTelefone() << std::endl;
    }
}

