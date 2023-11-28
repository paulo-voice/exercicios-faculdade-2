#include "Curso.h"

Curso::Curso()
{
	for (int i=0; i<QUANT_DISCIPLINA; i++){
		listDisciplina[i] = NULL;
	}
	
	semestres = 10;
	turno = NOTURNO;
}

Curso::~Curso()
{
	for (int i=0; i<QUANT_DISCIPLINA; i++){
		if(listDisciplina[i] != NULL){
			delete(listDisciplina[i]);
			listDisciplina[i] = NULL;
		}
			
	}	
}

string Curso::getNome(){
	return nome;
}

string Curso::getCoordenador(){
	return coordenador;
}

int Curso::getSemestres(){
	return semestres;
}

string Curso::getDepartamento(){
	return departamento;
}

Turno Curso::getTurno(){
	return turno;
}

void Curso::getListDisciplina(Disciplina *listDisciplina[QUANT_DISCIPLINA]){
	for (int i=0; i<QUANT_DISCIPLINA; i++){
		listDisciplina[i] = this->listDisciplina[i];
	}
}

void Curso::setNome(string nome){
	this->nome = nome;
}

void Curso::setCoordenador(string coordenador){
	this->coordenador = coordenador;
}

void Curso::setSemestres(int semestres){
	this->semestres = (semestres >=5 && semestres <=12 ? semestres : 10);
}

void Curso::setDepartamento(string departamento){
	this->departamento = departamento;
}

void Curso::setTurno(Turno turno){
	this->turno = turno;
}

void Curso::setListDisciplina(Disciplina *listDisciplina[QUANT_DISCIPLINA]){
	for (int i=0; i<QUANT_DISCIPLINA; i++){
		this->listDisciplina[i] = listDisciplina[i];
	}
}

void Curso::imprimirInformacoes(){
	
	cout << "Nome: " << nome << endl;
	cout << "Coordenador: " << coordenador << endl;
	cout << "Semestres: " << semestres << endl;
	cout << "Departamento: " << departamento << endl;
	
	switch(turno){
		case MATUTINO:
			cout << "Turno: Matutino" << endl;
			break;
		case VESPERTINO:
			cout << "Turno: Vespertino" << endl;
			break;
		case NOTURNO:
			cout << "Turno: Noturno" << endl;
			break;
	}
	
	for(int i=0; i<QUANT_DISCIPLINA; i++){	
		if(listDisciplina[i] != NULL){
			cout << "Informações da disciplina " << i+1 << endl;
			listDisciplina[i]->imprimirInformacoes();
		}	
	}
	
}
