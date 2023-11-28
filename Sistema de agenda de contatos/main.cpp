#include <iostream>
#include <locale>
#include "Agenda.h"
#include "Contato.h"

int main() {
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
    Agenda agenda;
    Contato contato1("João", "123-456-789");
    Contato contato2("Maria", "987-654-321");

    agenda.adicionarContato(contato1);
    agenda.adicionarContato(contato2);

    std::cout << "Contatos na agenda:" << std::endl;
    agenda.listarContatos();

    agenda.removerContato("João");

    std::cout << "\nContatos na agenda após remover João:" << std::endl;
    agenda.listarContatos();

    return 0;
}

