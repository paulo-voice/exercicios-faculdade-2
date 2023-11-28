#ifndef LIVRO_H
#define LIVRO_H

#include <string>

class Livro {
private:
    std::string titulo;
    bool disponivel;

public:
    Livro(std::string titulo);
    std::string getTitulo() const;
    bool isDisponivel() const;
    void emprestar();
    void devolver();
};

#endif // LIVRO_H

