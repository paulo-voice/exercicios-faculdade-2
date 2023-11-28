#ifndef CONTATO_H
#define CONTATO_H

#include <string>

class Contato {
public:
    Contato(const std::string& nome, const std::string& telefone);

    std::string getNome() const;
    std::string getTelefone() const;

private:
    std::string nome;
    std::string telefone;
};

#endif // CONTATO_H

