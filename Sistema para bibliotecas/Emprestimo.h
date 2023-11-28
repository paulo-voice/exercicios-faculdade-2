#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include "Pessoa.h"
#include "Livro.h"

class Emprestimo {
private:
    Pessoa pessoa;
    Livro livro;
    bool emprestado;

public:
    Emprestimo(Pessoa pessoa, Livro livro);
    void realizarEmprestimo();
    void realizarDevolucao();
};

#endif // EMPRESTIMO_H

