#include "Disciplina.h"

Disciplina::Disciplina()
{
	cargaHoraria = 54;
	creditos = 2;
}

Disciplina::~Disciplina()
{
}

string Disciplina::getNome(){
	return nome;
}

string Disciplina::getProfessor(){
	return professor;	
}

int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

int Disciplina::getCreditos(){
	return creditos;
}

void Disciplina::setNome(string nome){
	this->nome = nome;
}

void Disciplina::setProfessor(string professor){
	this->professor = professor;
}

void Disciplina::setCargaHoraria(int cargaHoraria){
	this->cargaHoraria = (cargaHoraria == 54 || cargaHoraria == 72 || cargaHoraria == 90 ? cargaHoraria : 54);
	
	if(this->cargaHoraria == 54)
		this->creditos = 2;
	else if (this->cargaHoraria == 72)
		this->creditos = 3;
	else
		this->creditos = 4;
}

void Disciplina::imprimirInformacoes(){
	
	cout << "Nome: " << nome << endl;
	cout << "Professor: " << professor << endl;
	cout << "Carga Horária: " << cargaHoraria << endl;
	cout << "Créditos: " << creditos << endl;
	
}
