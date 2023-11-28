#include <iostream>
#include <locale>

#define QUANT_CURSOS 2
#define QUANT_ALUNOS 4

#include "Aluno.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Disciplina * cadastrarDisciplina(int pos){
	
	Disciplina * disciplina = new Disciplina();
	
	string nome;
	string professor;
	int cargaHoraria;
	
	cout << "		Cadastro da " << pos << "° Disciplina		" << endl << endl;
	
	cout << "Entre com o nome da disciplina: ";
	getline(cin, nome);
	disciplina->setNome(nome);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o professor da disciplina: ";
	getline(cin, professor);
	disciplina->setProfessor(professor);
	cin.clear();
	fflush(stdin);
		
	cout << "Entre com a carga horária da disciplina: ";
	cin >> cargaHoraria;
	disciplina->setCargaHoraria(cargaHoraria);
	cin.clear();
	fflush(stdin);
	
	return disciplina;
	
}

Curso * cadastrarCurso(){
	
	Curso * curso = new Curso();
	
	string nome;
	string coordenador;
	int semestres;
	string departamento;
	Turno turno;
	Disciplina *listDisciplina[QUANT_DISCIPLINA];
	
	cout << "		Cadastro de Curso		" << endl << endl;
	
	cout << "Entre com o nome do curso: ";
	getline(cin, nome);
	curso->setNome(nome);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o coordenador do curso: ";
	getline(cin, coordenador);
	curso->setCoordenador(coordenador);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o departamento do curso: ";
	getline(cin, departamento);
	curso->setDepartamento(departamento);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com a quantidade de semestres do curso: ";
	cin >> semestres;
	curso->setSemestres(semestres);
	cin.clear();
	fflush(stdin);
	
	int op;
	
	do{
		
		cout << "Entre com o turno do curso (1 - MATUTINO, 2 - VESPERTINO e 3 - NOTURNO): ";
		cin >> op;
		cin.clear();
		fflush(stdin);
		
		if(op < 1 || op > 3)
			cout << "Opção invalida! Favor, entrar com uma opção correta." << endl;
		
	}while(op < 1 || op > 3);
	
	switch(op){
		
		case 1:
				turno = MATUTINO;
				break;
		case 2:
				turno = VESPERTINO;
				break;
		case 3:
				turno = NOTURNO;
				break;
	}
	
	curso->setTurno(turno);
	
	for(int i=0; i<QUANT_DISCIPLINA; i++){
		listDisciplina[i] = cadastrarDisciplina(i+1);
	}
	
	curso->setListDisciplina(listDisciplina);
	
	return curso;
}

Aluno * cadastrarAluno(Curso *curso){
	
	Aluno *aluno = new Aluno();
	aluno->setCurso(curso);
	
	string nome;
	long matricula;
	string cpf;
	string dataNascimento;
	string endereco;
	DisciplinaCursada *listDiscCursada[QUANT_DISCIPLINA];
	
	cout << "		Cadastrado de Alunos		" << endl << endl;
	
	cout << "Entre com a matricula do aluno: ";
	cin >> matricula;
	aluno->setMatricula(matricula);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o nome do aluno: ";
	getline(cin, nome);
	aluno->setNome(nome);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o CPF do aluno: ";
	getline(cin, cpf);
	aluno->setCpf(cpf);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com a data de nascimento do aluno: ";
	getline(cin, dataNascimento);
	aluno->setDataNascimento(dataNascimento);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o endereço do aluno: ";
	getline(cin, endereco);
	aluno->setEndereco(endereco);
	cin.clear();
	fflush(stdin);
	
	Disciplina *listDisciplina[QUANT_DISCIPLINA];
	curso->getListDisciplina(listDisciplina);
	
	for(int i=0; i<QUANT_DISCIPLINA; i++){
		DisciplinaCursada * discCursada = new DisciplinaCursada();
		discCursada->setDisciplina(listDisciplina[i]);
		listDiscCursada[i] = discCursada;
	}
	
	aluno->setListDiscCursada(listDiscCursada);
	
	return aluno;
	
}

Aluno * buscarAluno(Aluno *listAlunos[QUANT_ALUNOS], long matricula){
	
	Aluno *aluno = NULL;
	
	for (int i=0; i<QUANT_ALUNOS; i++){
		if(listAlunos[i] != NULL){
			if(listAlunos[i]->getMatricula() == matricula){
				aluno = listAlunos[i];
				break;
			}
		}		
	}
	
	return aluno;
}

void atribuirNotasDisciplinaCursada(DisciplinaCursada * disCursada){
	
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float frequencia;
	
	cout << "		Atribuir nota para a disciplina " << disCursada->getDisciplina()->getNome() << endl;
	
	cout << "Entre com a nota 1 da disciplina: ";
	cin >> nota1;
	disCursada->setNota1(nota1);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com a nota 2 da disciplina: ";
	cin >> nota2;
	disCursada->setNota2(nota2);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com a nota 3 da disciplina: ";
	cin >> nota3;
	disCursada->setNota3(nota3);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com a nota 4 da disciplina: ";
	cin >> nota4;
	disCursada->setNota4(nota4);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com a frequência da disciplina: ";
	cin >> frequencia;
	disCursada->setFrequencia(frequencia);
	cin.clear();
	fflush(stdin);
	
}

void atribuirNotasAluno(Aluno *aluno){
	
	DisciplinaCursada *listDiscCursada[QUANT_DISCIPLINA];
	aluno->getListDiscCursada(listDiscCursada);
	
	for(int i=0; i< QUANT_DISCIPLINA; i++){
		atribuirNotasDisciplinaCursada(listDiscCursada[i]);
	}
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
	
	Curso * listCursos[QUANT_CURSOS];
	Aluno * listAlunos[QUANT_ALUNOS];
	
	int countCurso = 0;
	int countAluno = 0;
	
	
	int op;
	
	do{
		do{
			cout << "		Cadastro Acadêmico		" << endl << endl;
			cout << "1 - Cadastrar Curso" << endl;
			cout << "2 - Cadastrar Aluno" << endl;
			cout << "3 - Atribuir Nota ao Aluno" << endl;
			cout << "4 - Imprimir Relatório de Cursos" << endl;
			cout << "5 - Imprimir Relatório de Alunos" << endl;
			cout << "6 - Sair" << endl;
			cout << "Entre com a opção: ";
			cin >> op;	
			cin.clear();
			fflush(stdin);
			
			if(op < 1 || op > 6)
				cout << "Opção invalida! Favor inserir uma opção correta." << endl;
				
		}while(op < 1 || op > 6);
	
		if(op != 6){
			
			switch(op){
				
				case 1:
						if(countCurso < 2){
							Curso *curso = cadastrarCurso();
							listCursos[countCurso] = curso;
							countCurso ++;
							cout << "Curso " << curso->getNome() << " cadastrado com sucesso!" << endl;
						}else{
							cout << "A quantidade limite de cursos cadastrados foi atingida!" << endl;
						}
					
						break;
						
				case 2:
						if(countCurso > 0){
							
							int opCurso;
							
							do{
								
								cout << "Entre com o curso do aluno " << endl;
								for(int i=0; i<countCurso; i++){
									cout << i+1 << " - " << listCursos[i]->getNome() << endl;
								}
								cout << "Entre com a opção: ";
								cin >> opCurso;
								cin.clear();
								fflush(stdin);
								
								if(opCurso < 1 || opCurso > countCurso)
									cout << "Opção invalida! Favor, entrar com uma opção correta." << endl;
								
							}while (opCurso < 1 || opCurso > countCurso);
							
							Curso *curso = listCursos[opCurso-1];
							Aluno *aluno = cadastrarAluno(curso);
							listAlunos[countAluno] = aluno;
							countAluno ++;
							cout << "Aluno " << aluno->getNome() << " cadastrado com sucesso!" << endl;
									
						}else{
							cout << "Você precisa cadastrar pelo menos um curso para iniciar o cadastro de alunos!" << endl;
						}
					
						break;
						
				case 3: 
						if(countAluno > 0){
							
							long matricula;
							
							cout << "Entre com a matricula do aluno: ";
							cin >> matricula;
							cin.clear();
							fflush(stdin);
							
							Aluno *aluno = buscarAluno(listAlunos, matricula);
							
							if(aluno != NULL){
								atribuirNotasAluno(aluno);
							}else{
								cout << "Não existe um(a) aluno(a) com a matricula " << matricula << " cadastrado no sistema!" << endl;
							}
							
						}else{
							cout << "Não existe aluno cadastrado no sistema!" << endl;
						}
						break;
						
				case 4:
						if(countCurso > 0){
							cout << "		Relatório de cursos		" << endl << endl;
							
							for(int i=0; i<countCurso; i++){
								if(listCursos[i] != NULL){
									cout << "------------------------------------------" << endl;
									listCursos[i]->imprimirInformacoes();
									cout << "------------------------------------------" << endl << endl;
								}	
							}
							
						}else{
							cout << "Não existe curso cadastrado no sistema!" << endl;
						}
					
						break;
						
				case 5:
						if(countAluno > 0){
							cout << "		Relatório de alunos		" << endl << endl;
							
							for(int i=0; i<countAluno; i++){
								if(listAlunos[i] != NULL){
									cout << "------------------------------------------" << endl;
									listAlunos[i]->imprimirInformacoes();
									cout << "------------------------------------------" << endl << endl;
								}
							}
							
						}else{
							cout << "Não existe aluno cadastrado no sistema!" << endl;
						}
					
						break;
						
				default:
						cout << "Opção invalida!" << endl;
					
			}
			
		}else{
			cout << "Obrigado por utilizar o nosso sistema!" << endl;
		}
	
	}while (op != 6);

	return 0;
}
