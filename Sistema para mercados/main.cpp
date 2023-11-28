#include <iostream>
#include <locale>
#include "Produto.h"
#include "Cliente.h"
#include "Pedido.h"
#include "Pagamento.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
	
	
    Produto produto1("Arroz", 5.0, 50);
    Produto produto2("Feijão", 4.0, 40);
    
    Cliente cliente("João");
    
    vector<pair<Produto, int>> itensDoPedido = {{produto1, 3}, {produto2, 2}};
    
    Pagamento formaDePagamento(FormaDePagamento::CARTAO);
    
    Pedido pedido(cliente, itensDoPedido, formaDePagamento);
    
    cout << "Pedido do Cliente: " << cliente.getNome() << endl;
    pedido.imprimirPedido();
    
    return 0;
}


