#include "PessoaJ.h"

PessoaJ::PessoaJ()
{
}

PessoaJ::~PessoaJ()
{
}

string PessoaJ::getNomeJ() const {
    return nomeJ;
}

string PessoaJ::getCNPJ() const {
    return cnpj;
}

string PessoaJ::getEnderecoJ() const {
    return enderecoJ;
}

string PessoaJ::getEmailJ() const {
    return emailJ;
}

string PessoaJ::getInscricaoEstadual() const {
    return inscricaoEstadual;
}

string PessoaJ::getRazaoSocial() const {
    return razaoSocial;
}


void PessoaJ::setNomeJ(string nomeJ){
	this->nomeJ = nomeJ;
}

void PessoaJ::setCNPJ(string cnpj){
	this->cnpj = cnpj;
}

void PessoaJ::setEnderecoJ(string enderecoJ){
	this->enderecoJ = enderecoJ;
}

void PessoaJ::setEmailJ(string emailJ){
	this->emailJ = emailJ;
}

void PessoaJ::setInscricaoEstadual(string inscricaoEstadual){
	this->inscricaoEstadual = inscricaoEstadual;
}

void PessoaJ::setRazaoSocial(string razaoSocial) {
    this->razaoSocial = razaoSocial;
}
