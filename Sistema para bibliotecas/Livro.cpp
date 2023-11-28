#include "Livro.h"

Livro::Livro(std::string titulo) : titulo(titulo), disponivel(true) {}

std::string Livro::getTitulo() const {
    return titulo;
}

bool Livro::isDisponivel() const {
    return disponivel;
}

void Livro::emprestar() {
    if (disponivel) {
        disponivel = false;
    }
}

void Livro::devolver() {
    disponivel = true;
}

