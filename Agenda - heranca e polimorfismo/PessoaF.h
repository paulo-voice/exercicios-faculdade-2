#ifndef PESSOAF_H
#define PESSOAF_H
#include <iostream>

using namespace std;
class PessoaF
{
	public:
		PessoaF();
		~PessoaF();
	
		string getNome() const;
		string getCPF() const;
		string getEndereco() const;
		string getNascimento() const;
		string getEmail() const;
		
		void setNome(string nome);
		void setCPF(string cpf);
		void setEndereco(string endereco);
		void setNascimento(string nascimento);
		void setEmail(string email);
				
	private:
		string nome;
		string cpf;
		string nascimento;
		string endereco;
		string email;
};

#endif
