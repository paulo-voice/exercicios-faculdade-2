#ifndef CURSO_H
#define CURSO_H

#include "Disciplina.h"

#define QUANT_DISCIPLINA 3

enum Turno {
	MATUTINO = 1,
	VESPERTINO = 2,
	NOTURNO = 3
};

class Curso
{
	private:
		string nome;
		string coordenador;
		int semestres;
		string departamento;
		Turno turno;
		Disciplina *listDisciplina[QUANT_DISCIPLINA];
	
	public:
		Curso();
		~Curso();
		
		string getNome();
		string getCoordenador();
		int getSemestres();
		string getDepartamento();
		Turno getTurno();
		void getListDisciplina(Disciplina *listDisciplina[QUANT_DISCIPLINA]);
		
		void setNome(string nome);
		void setCoordenador(string coordenador);
		void setSemestres(int semestres);
		void setDepartamento(string departamento);
		void setTurno(Turno turno);
		void setListDisciplina(Disciplina *listDisciplina[QUANT_DISCIPLINA]);
		
		void imprimirInformacoes();

};

#endif
