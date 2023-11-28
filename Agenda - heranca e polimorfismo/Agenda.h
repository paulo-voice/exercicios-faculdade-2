#ifndef AGENDA_H
#define AGENDA_H

#define MAX_PESSOAF 5
#define MAX_PESSOAJ 5
#include <vector>
#include <algorithm> 
#include "PessoaF.h"
#include "PessoaJ.h"

class Agenda {
public:
	Agenda();
    ~Agenda();    
    void adicionarPessoaFisica(std::vector<PessoaF>& cadastro);
    void removerPessoaFisica(std::vector<PessoaF>& cadastro, const std::string& cpf);
    void visualizarPessoa(const PessoaF& pessoa);
    void visualizarAgenda(const std::vector<PessoaF>& cadastro);
    void pesquisarPorNome(const std::vector<PessoaF>& cadastro, const std::string& nome);
    void pesquisarPorCPF(const std::vector<PessoaF>& cadastro, const std::string& cpf);
    void visualizarAgendaOrdenadaF(const std::vector<PessoaF>& cadastro);

    void adicionarPessoaJuridica(std::vector<PessoaJ>& cadastroJ);
    void removerPessoaJuridica(std::vector<PessoaJ>& cadastroJ, const std::string& cnpj);
    void visualizarPessoaJ(const PessoaJ& pessoaJ);
    void visualizarAgendaJ(const std::vector<PessoaJ>& cadastroJ);
    void pesquisarPorNomeJ(const std::vector<PessoaJ>& cadastroJ, const std::string& nomeJ);
    void pesquisarPorCNPJ(const std::vector<PessoaJ>& cadastroJ, const std::string& cnpj);
    void visualizarAgendaOrdenadaJ(const std::vector<PessoaJ>& cadastroJ);
    
private:
	
};

#endif

