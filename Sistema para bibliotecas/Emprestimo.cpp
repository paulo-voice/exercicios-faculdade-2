#include "Emprestimo.h"

Emprestimo::Emprestimo(Pessoa pessoa, Livro livro) : pessoa(pessoa), livro(livro), emprestado(false) {}

void Emprestimo::realizarEmprestimo() {
    if (livro.isDisponivel()) {
        livro.emprestar();
        emprestado = true;
    }
}

void Emprestimo::realizarDevolucao() {
    if (emprestado) {
        livro.devolver();
        emprestado = false;
    }
}

