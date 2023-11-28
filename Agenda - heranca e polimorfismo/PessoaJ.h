#ifndef PESSOAJ_H
#define PESSOAJ_H
#include <iostream>

using namespace std;

class PessoaJ
{
	public:
		PessoaJ();
		~PessoaJ();
		
		string getNomeJ() const;
		string getCNPJ() const;
		string getEnderecoJ() const;
		string getEmailJ() const;
		string getInscricaoEstadual() const;
		string getRazaoSocial() const;
		
		void setNomeJ(string nomeJ);
		void setCNPJ(string cnpj);
		void setEnderecoJ(string enderecoJ);
		void setEmailJ(string emailJ);
		void setInscricaoEstadual(string inscricaoEstadual);
		void setRazaoSocial(string razaoSocial) ;
		
	private:
		string nomeJ;
		string cnpj;
		string enderecoJ;
		string emailJ;
		string inscricaoEstadual;
		string razaoSocial;

};

#endif
