#include "Pagamento.h"

Pagamento::Pagamento(FormaDePagamento forma)
    : forma(forma) {}

FormaDePagamento Pagamento::getForma() const {
    return forma;
}

std::string Pagamento::toString() const {
    switch (forma) {
        case FormaDePagamento::DINHEIRO:
            return "Dinheiro";
        case FormaDePagamento::CHEQUE:
            return "Cheque";
        case FormaDePagamento::CARTAO:
            return "Cartão";
        default:
            return "Desconhecido";
    }
}

