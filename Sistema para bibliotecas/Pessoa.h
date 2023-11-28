#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
private:
    std::string nome;

public:
    Pessoa(std::string nome);
    std::string getNome() const;
};

#endif // PESSOA_H

