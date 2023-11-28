#ifndef PEDIDO_H
#define PEDIDO_H

#include <vector>
#include "Produto.h"
#include "Cliente.h"
#include "Pagamento.h"

class Pedido {
private:
    Cliente cliente;
    std::vector<std::pair<Produto, int>> itens; // Produto e quantidade
    Pagamento formaDePagamento;

public:
    Pedido(const Cliente& cliente, const std::vector<std::pair<Produto, int>>& itens, const Pagamento& formaDePagamento);
    
    // Métodos para calcular o total do pedido
    double calcularTotal() const;
    
    // Imprime os detalhes do pedido
    void imprimirPedido() const;
};

#endif

