#include "Aluno.h"

Aluno::Aluno()
{
	curso = NULL;
	
	for (int i=0; i<QUANT_DISCIPLINA; i++){
		listDiscCursada[i] = NULL;
	}
}

Aluno::~Aluno()
{
	for (int i=0; i<QUANT_DISCIPLINA; i++){
		if(listDiscCursada[i] != NULL){
			delete(listDiscCursada[i]);
			listDiscCursada[i] = NULL;
		}
	}
}

string Aluno::getNome(){
	return nome;
}

long Aluno::getMatricula(){
	return matricula;
}

string Aluno::getCpf(){
	return cpf;
}

string Aluno::getDataNascimento(){
	return dataNascimento;
}

string Aluno::getEndereco(){
	return endereco;
}

Curso *Aluno::getCurso(){
	return curso;
}

void Aluno::getListDiscCursada(DisciplinaCursada *listDiscCursada[QUANT_DISCIPLINA]){
	for(int i=0; i<QUANT_DISCIPLINA; i++){
		listDiscCursada[i] = this->listDiscCursada[i];
	}
}

void Aluno::setNome(string nome){
	this->nome = nome;
}

void Aluno::setMatricula(long matricula){
	this->matricula = matricula;
}

void Aluno::setCpf(string cpf){
	this->cpf = cpf;
}

void Aluno::setDataNascimento(string dataNascimento){
	this->dataNascimento = dataNascimento;
}

void Aluno::setEndereco(string endereco){
	this->endereco = endereco;
}

void Aluno::setCurso(Curso *curso){
	this->curso = curso;
}

void Aluno::setListDiscCursada(DisciplinaCursada *listDiscCursada[QUANT_DISCIPLINA]){
	for(int i=0; i<QUANT_DISCIPLINA; i++){
		this->listDiscCursada[i] = listDiscCursada[i];
	}
}

void Aluno::imprimirInformacoes(){
	
	cout << "Nome: " << nome << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "CPF: " << cpf << endl;
	cout << "Data de Nascimento: " << dataNascimento << endl;
	cout << "Endereço: " << endereco << endl;
	cout << "Curso: " << curso->getNome() << endl;
	
	for(int i=0; i<QUANT_DISCIPLINA; i++){
		if(listDiscCursada[i] != NULL){
			listDiscCursada[i]->imprimirInformacoes();
		}
	}
}
