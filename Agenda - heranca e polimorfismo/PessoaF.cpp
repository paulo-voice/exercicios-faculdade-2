#include "PessoaF.h"

PessoaF::PessoaF()
{
}

PessoaF::~PessoaF()
{
}

string PessoaF::getNome() const {
    return nome;
}

string PessoaF::getCPF() const {
    return cpf;
}

string PessoaF::getEndereco() const {
    return endereco;
}

string PessoaF::getNascimento() const {
    return nascimento;
}

string PessoaF::getEmail() const {
    return email;
}


void PessoaF::setNome(string nome){
	this->nome = nome;
}

void PessoaF::setCPF(string cpf){
	this->cpf = cpf;
}

void PessoaF::setEndereco(string endereco){
	this->endereco = endereco;
}

void PessoaF::setNascimento(string nascimento){
	this->nascimento = nascimento;
}

void PessoaF::setEmail(string email){
	this->email = email;
}

