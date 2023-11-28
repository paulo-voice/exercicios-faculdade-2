#include "DisciplinaCursada.h"

DisciplinaCursada::DisciplinaCursada()
{
	disciplina = NULL;
	nota1 = 0;
	nota2 = 0;
	nota3 = 0;
	nota4 = 0;
	frequencia = 0;
}

DisciplinaCursada::~DisciplinaCursada()
{
}

Disciplina *DisciplinaCursada::getDisciplina(){
	return disciplina;
}

float DisciplinaCursada::getNota1(){
	return nota1;
}

float DisciplinaCursada::getNota2(){
	return nota2;
}

float DisciplinaCursada::getNota3(){
	return nota3;
}

float DisciplinaCursada::getNota4(){
	return nota4;
}

float DisciplinaCursada::getFrequencia(){
	return frequencia;
}

void DisciplinaCursada::setDisciplina(Disciplina *disciplina){
	this->disciplina = disciplina;
}

void DisciplinaCursada::setNota1(float nota1){
	this->nota1 = (nota1 >=0 && nota1 <=100 ? nota1 : 0);
}

void DisciplinaCursada::setNota2(float nota2){
	this->nota2 = (nota2 >=0 && nota2 <=100 ? nota2 : 0);
}

void DisciplinaCursada::setNota3(float nota3){
	this->nota3 = (nota3 >=0 && nota3 <=100 ? nota3 : 0);	
}

void DisciplinaCursada::setNota4(float nota4){
	this->nota4 = (nota4 >=0 && nota4 <=100 ? nota4 : 0);
}

void DisciplinaCursada::setFrequencia(float frequencia){
	this->frequencia = (frequencia >=0 && frequencia <=100 ? frequencia : 0);
}

float DisciplinaCursada::mediaNotas(){
	return (nota1+nota2+nota3+nota4)/4;
}

void DisciplinaCursada::imprimirInformacoes(){
	
	cout << "	Informações sobre a disciplina	" << disciplina->getNome() << endl << endl;
	cout << "Nota1: " << nota1 << endl;
	cout << "Nota2: " << nota2 << endl;
	cout << "Nota3: " << nota3 << endl;
	cout << "Nota4: " << nota4 << endl;
	cout << "Frequência: " << frequencia << "%" << endl;
	
	if(frequencia >= 75){
		float media = mediaNotas();
		if(media >= 60){
			cout << "Situação: Aprovado!" << endl;
		}else if(media >= 40){
			cout << "Situação: Em exame final!" << endl;
		}else{
			cout << "Situação: Reprovado!" << endl;
		}
		
	}else{
		cout << "Situação: Reprovado!" << endl;
	}
	
}
