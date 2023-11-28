#ifndef DISCIPLINACURSADA_H
#define DISCIPLINACURSADA_H

#include "Disciplina.h"

class DisciplinaCursada
{
	private:
		Disciplina *disciplina;
		float nota1;
		float nota2;
		float nota3;
		float nota4;
		float frequencia;
	
	public:
		DisciplinaCursada();
		~DisciplinaCursada();
		
		Disciplina *getDisciplina();
		float getNota1();
		float getNota2();
		float getNota3();
		float getNota4();
		float getFrequencia();
		
		void setDisciplina(Disciplina *disciplina);
		void setNota1(float nota1);
		void setNota2(float nota2);
		void setNota3(float nota3);
		void setNota4(float nota4);
		void setFrequencia(float frequencia);
		
		float mediaNotas();
		void imprimirInformacoes();

};

#endif
