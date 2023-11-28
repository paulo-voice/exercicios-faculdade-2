#ifndef ALUNO_H
#define ALUNO_H

#include "Curso.h"
#include "DisciplinaCursada.h"

class Aluno
{
	
	private:
		string nome;
		long matricula;
		string cpf;
		string dataNascimento;
		string endereco;
		Curso *curso;
		DisciplinaCursada *listDiscCursada[QUANT_DISCIPLINA];
		
	public:
		Aluno();
		~Aluno();
		
		string getNome();
		long getMatricula();
		string getCpf();
		string getDataNascimento();
		string getEndereco();
		Curso *getCurso();
		void getListDiscCursada(DisciplinaCursada *listDiscCursada[QUANT_DISCIPLINA]);
		
		void setNome(string nome);
		void setMatricula(long matricula);
		void setCpf(string cpf);
		void setDataNascimento(string dataNascimento);
		void setEndereco(string endereco);
		void setCurso(Curso *curso);
		void setListDiscCursada(DisciplinaCursada *listDiscCursada[QUANT_DISCIPLINA]);
		
	 	void imprimirInformacoes();

};

#endif
