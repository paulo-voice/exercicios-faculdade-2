#include "Agenda.h"

Agenda::Agenda()
{
}

Agenda::~Agenda()
{
}

void Agenda::adicionarPessoaFisica(vector<PessoaF>& cadastro){
	if (cadastro.size() >= MAX_PESSOAF) {
	    cout << "A agenda está cheia. Não é possível adicionar mais pessoas." << endl;
        return;
    }
	PessoaF pessoaf;
	string nome,cpf,endereco,nascimento,email;
	
	cout<<"Digite o nome da pessoa: "<<endl;
	cin.ignore();
	getline(cin, nome);
	pessoaf.setNome(nome);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite o CPF: "<<endl;
	getline(cin, cpf);
	pessoaf.setCPF(cpf);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite o endereço: "<<endl;
	getline(cin, endereco);
	pessoaf.setEndereco(endereco);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite a data de nascimento (DD/MM/AA): "<<endl;
	getline(cin, nascimento);
	pessoaf.setNascimento(nascimento);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite o email: "<<endl;
	getline(cin, email);
	pessoaf.setEmail(email);
	cin.clear();
	fflush(stdin);
	
	cadastro.push_back(pessoaf);
	cout << "Pessoa adicionada ao cadastro com sucesso!" <<endl;
}


void Agenda::removerPessoaFisica(vector<PessoaF>& cadastro, const string& cpf) {
    for (auto it = cadastro.begin(); it != cadastro.end(); ++it) {
        if (it->getCPF() == cpf) {
            cadastro.erase(it);
            cout << "Pessoa removida da agenda com sucesso!" << endl;
            return;
        }
    }
    cout << "Pessoa com o CPF " << cpf << " não encontrada na agenda." << endl;
}

void Agenda::visualizarPessoa(const PessoaF& pessoa) {
    cout << "Nome: " << pessoa.getNome() << endl;
    cout << "CPF: " << pessoa.getCPF() << endl;
    cout << "Endereço: " << pessoa.getEndereco() << endl;
    cout << "Data de Nascimento: " << pessoa.getNascimento() << endl;
    cout << "Email: " << pessoa.getEmail() << endl;
    cout << "-------------------------" << endl;
}

void Agenda::visualizarAgenda(const vector<PessoaF>& cadastro) {
    if (cadastro.empty()) {
        cout << "A agenda está vazia." << endl;
    } else {
        cout << "Agenda de Pessoa Física:" << endl;
        for (const PessoaF& pessoa : cadastro) {
            visualizarPessoa(pessoa);
        }
    }
}

void Agenda::pesquisarPorNome(const vector<PessoaF>& cadastro, const string& nome) {
    for (const PessoaF& pessoa : cadastro) {
        if (pessoa.getNome() == nome) {
            visualizarPessoa(pessoa);
            return;
        }
    }
    cout << "Pessoa com o nome " << nome << " não encontrada na agenda." << endl;
}

void Agenda::pesquisarPorCPF(const vector<PessoaF>& cadastro, const string& cpf) {
    for (const PessoaF& pessoa : cadastro) {
        if (pessoa.getCPF() == cpf) {
            visualizarPessoa(pessoa);
            return;
        }
    }
    cout << "Pessoa com o CPF " << cpf << " não encontrada na agenda." << endl;
}

void Agenda::visualizarAgendaOrdenadaF(const vector<PessoaF>& cadastro) {
    vector<PessoaF> cadastroOrdenado = cadastro;

    sort(cadastroOrdenado.begin(), cadastroOrdenado.end(), [](const PessoaF& a, const PessoaF& b) {
        return a.getCPF() < b.getCPF();
    });

    cout << "Agenda fisica ordems por CPF:" << endl;
    for (const PessoaF& pessoa : cadastroOrdenado) {
        visualizarPessoa(pessoa);
    }
}

/* -------------------------SEPARAÇÃO JURIDICA----------------------*/

void Agenda::adicionarPessoaJuridica(vector<PessoaJ>& cadastroJ){
	if (cadastroJ.size() >= MAX_PESSOAJ) {
	    cout << "A agenda está cheia. Não é possível adicionar mais pessoas." << endl;
        return;
    }
	PessoaJ pessoaj;
	string nomeJ, cnpj, enderecoJ, emailJ, inscricaoEstadual, razaoSocial;	
	cout<<"Digite o nome da pessoa: "<<endl;
	cin.ignore();
	getline(cin, nomeJ);
	pessoaj.setNomeJ(nomeJ);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite o CNPJ: "<<endl;
	getline(cin, cnpj);
	pessoaj.setCNPJ(cnpj);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite o endereço: "<<endl;
	getline(cin, enderecoJ);
	pessoaj.setEnderecoJ(enderecoJ);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite o email: "<<endl;
	getline(cin, emailJ);
	pessoaj.setEmailJ(emailJ);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite a razao social: "<<endl;
	getline(cin, razaoSocial);
	pessoaj.setRazaoSocial(razaoSocial);
	cin.clear();
	fflush(stdin);
	
	cout<<"Digite a inscrição estadual: "<<endl;
	getline(cin, inscricaoEstadual);
	pessoaj.setInscricaoEstadual(inscricaoEstadual);
	cin.clear();
	fflush(stdin);
	
	cadastroJ.push_back(pessoaj);
	cout << "Pessoa adicionada ao cadastro com sucesso!" << std::endl;
}

void Agenda::removerPessoaJuridica(vector<PessoaJ>& cadastroJ, const string& cnpj) {
    for (auto it = cadastroJ.begin(); it != cadastroJ.end(); ++it) {
        if (it->getCNPJ() == cnpj) {
            cadastroJ.erase(it);
            cout << "Pessoa removida da agenda com sucesso!" << endl;
            return;
        }
    }
    cout << "Pessoa com o CNPJ " << cnpj << " não encontrada na agenda." << endl;
}

void Agenda::visualizarPessoaJ(const PessoaJ& pessoaJ) {
    cout << "Nome: " << pessoaJ.getNomeJ() << endl;
    cout << "CNPJ: " << pessoaJ.getCNPJ() << endl;
    cout << "Endereço: " << pessoaJ.getEnderecoJ() << endl;
    cout << "Email: " << pessoaJ.getEmailJ() << endl;
    cout << "Razão Social: " << pessoaJ.getRazaoSocial() << endl;
    cout << "Inscrição Estadual: " << pessoaJ.getInscricaoEstadual() << endl;
    cout << "-------------------------" << endl;
}
void Agenda::visualizarAgendaJ(const vector<PessoaJ>& cadastroJ) {
    if (cadastroJ.empty()) {
        cout << "A agenda está vazia." << endl;
    } else {
        cout << "Agenda de Pessoa Juridica:" << endl;
        for (const PessoaJ& pessoa : cadastroJ) {
            visualizarPessoaJ(pessoa);
        }
    }
}

void Agenda::pesquisarPorNomeJ(const vector<PessoaJ>& cadastroJ, const string& nomeJ) {
    for (const PessoaJ& pessoa : cadastroJ) {
        if (pessoa.getNomeJ() == nomeJ) {
           visualizarPessoaJ(pessoa);
            return;
        }
    }
    cout << "Pessoa com o nome " << nomeJ << " não encontrada na agenda." << endl;
}

void Agenda::pesquisarPorCNPJ(const vector<PessoaJ>& cadastroJ, const string& cnpj) {
    for (const PessoaJ& pessoa : cadastroJ) {
        if (pessoa.getCNPJ() == cnpj) {
            visualizarPessoaJ(pessoa);
            return;
        }
    }
    cout << "Pessoa com o CNPJ " << cnpj << " não encontrada na agenda." << endl;
}

void Agenda::visualizarAgendaOrdenadaJ(const vector<PessoaJ>& cadastro) {
    vector<PessoaJ> cadastroOrdenado = cadastro;

    sort(cadastroOrdenado.begin(), cadastroOrdenado.end(), [](const PessoaJ& a, const PessoaJ& b) {
        return a.getCNPJ() < b.getCNPJ();
    });

    cout << "Agenda juridica ordem por CNPJ:" << endl;
    for (const PessoaJ& pessoa : cadastroOrdenado) {
        visualizarPessoaJ(pessoa);
    }
}
