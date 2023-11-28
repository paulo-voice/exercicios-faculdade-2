#include "Pedido.h"

Pedido::Pedido(const Cliente& cliente, const std::vector<std::pair<Produto, int>>& itens, const Pagamento& formaDePagamento)
    : cliente(cliente), itens(itens), formaDePagamento(formaDePagamento) {}

double Pedido::calcularTotal() const {
    double total = 0.0;
    for (const std::pair<Produto, int>& item : itens) {
        total += item.first.getPreco() * item.second;
    }
    return total;
}

void Pedido::imprimirPedido() const {
    std::cout << "Cliente: " << cliente.getNome() << std::endl;
    
    std::cout << "Itens do Pedido:" << std::endl;
    for (const std::pair<Produto, int>& item : itens) {
        std::cout << "Produto: " << item.first.getNome()
                  << ", Quantidade: " << item.second
                  << ", Subtotal: R$" << item.first.getPreco() * item.second << std::endl;
    }

    std::cout << "Total do Pedido: R$" << calcularTotal() << std::endl;
    std::cout << "Forma de Pagamento: " << formaDePagamento.toString() << std::endl;
}

