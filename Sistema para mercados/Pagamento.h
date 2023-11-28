#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

enum class FormaDePagamento {
    DINHEIRO,
    CHEQUE,
    CARTAO
};

class Pagamento {
private:
    FormaDePagamento forma;

public:
    Pagamento(FormaDePagamento forma);
    
    // Retorna a forma de pagamento
    FormaDePagamento getForma() const;
    
    // Converte a forma de pagamento para uma string
    std::string toString() const;
};

#endif

