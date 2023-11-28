#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
private:
    std::string nome;

public:
    Cliente(const std::string& nome);
    
    // Getters
    std::string getNome() const;
};

#endif

