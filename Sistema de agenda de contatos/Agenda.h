#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include "Contato.h"

class Agenda {
public:
    Agenda();

    bool adicionarContato(const Contato& contato);
    bool removerContato(const std::string& nome);
    void listarContatos() const;

private:
    std::vector<Contato> contatos;
};

#endif // AGENDA_H

