#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <iostream>

using namespace std;

class Disciplina
{
	private:
		string nome;
		string professor;
		int cargaHoraria;
		int creditos;
	
	public:
		Disciplina();
		~Disciplina();
		
		string getNome();
		string getProfessor();
		int getCargaHoraria();
		int getCreditos();
		
		void setNome(string nome);
		void setProfessor(string professor);
		void setCargaHoraria(int cargaHoraria);
		
		void imprimirInformacoes();
};

#endif
