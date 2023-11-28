#include <iostream>
#include "Pessoa.h"
#include "Livro.h"
#include "Emprestimo.h"

int main() {
    Pessoa pessoa1("João");
    Pessoa pessoa2("Maria");

    Livro livro1("Aprendendo C++");
    Livro livro2("Programação em Python");

    Emprestimo emprestimo1(pessoa1, livro1);
    Emprestimo emprestimo2(pessoa2, livro2);

    emprestimo1.realizarEmprestimo();
    emprestimo2.realizarEmprestimo();

    emprestimo1.realizarDevolucao();
    emprestimo2.realizarDevolucao();

    return 0;
}

