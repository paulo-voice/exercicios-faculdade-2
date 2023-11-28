#include <iostream>
#include <locale>
#include <vector>

#include "Agenda.h"
#include "PessoaF.h"
#include "PessoaJ.h"


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
	Agenda agenda;
	vector<PessoaF> cadastro;
	vector<PessoaJ> cadastroJ;
	string removerCPF,pesquisarNome,pesquisarCPF;
	string removerCNPJ, pesquisarNomeJ, pesquisarCNPJ;
	int opcaoJ, opcaoF, opcaoP;
	do {
		system("cls");
        cout << "Menu:" << endl;
        cout << "1. Menu pessoa física" << endl;
        cout << "2. Menu pessoa juridica" << endl;
        cout << "3. Ver todos dados Ordenados" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcaoP;
        switch (opcaoP) {
        	case 1:
        			do {
        				system("cls");
				        cout << "Menu:" << endl;
				        cout << "1. Visualizar agenda de pessoa física" << endl;
				        cout << "2. Procurar pessoa por Nome" << endl;
				        cout << "3. Procurar pessoa por CPF" << endl;
				        cout << "4. Adicionar alguém na agenda" << endl;
				        cout << "5. Remover alguém da agenda" << endl;
				        cout << "0. Sair" << endl;
				        cout << "Escolha uma opção: ";
				        cin >> opcaoF;
				        switch (opcaoF) {
				            case 1:
						   		agenda.visualizarAgenda(cadastro);
						   		system("pause");
				                break;
				            case 2:
				            	cout << "Digite o nome da pessoa a procurar: ";
				    			cin.ignore();
				  				getline(cin, pesquisarNome);
				            	agenda.pesquisarPorNome(cadastro, pesquisarNome);
				            	system("pause");
				                break;
				            case 3:
				              	cout << "Digite o CPF da pessoa a procurar: ";
				    			cin.ignore();
				  				getline(cin, pesquisarCPF);
				            	agenda.pesquisarPorCPF(cadastro, pesquisarCPF);
				            	system("pause");
				                break;
				            case 4:
				            	agenda.adicionarPessoaFisica(cadastro);
				            	system("pause");
				                break;
				            case 5:
				            	cout << "Digite o CPF da pessoa que deseja remover: ";
				    			cin.ignore();
				  				getline(cin, removerCPF);
				  				agenda.removerPessoaFisica(cadastro, removerCPF);
				  				system("pause");
				                break;
				            case 0:
				                cout << "Saindo do programa." << endl;
				                break;
				            default:
				                cout << "Opção inválida. Tente novamente." << endl;
				        }
				    } while (opcaoF != 0);
				    break;
        	case 2:
        		do {
        				system("cls");
				        cout << "Menu:" << endl;
				        cout << "1. Visualizar agenda de pessoa Juridica" << endl;
				        cout << "2. Procurar pessoa por Nome" << endl;
				        cout << "3. Procurar pessoa por CNPJ" << endl;
				        cout << "4. Adicionar alguém na agenda" << endl;
				        cout << "5. Remover alguém da agenda" << endl;
				        cout << "0. Sair" << endl;
				        cout << "Escolha uma opção: ";
				        cin >> opcaoJ;
				        switch (opcaoJ) {
				            case 1:
						   		agenda.visualizarAgendaJ(cadastroJ);
						   		system("pause");
				                break;
				            case 2:
				            	cout << "Digite o nome da pessoa a procurar: ";
				    			cin.ignore();
				  				getline(cin, pesquisarNomeJ);
				            	agenda.pesquisarPorNomeJ(cadastroJ, pesquisarNomeJ);
				            	system("pause");
				                break;
				            case 3:
				              	cout << "Digite o CNPJ da pessoa a procurar: ";
				    			cin.ignore();
				  				getline(cin, pesquisarCNPJ);
				            	agenda.pesquisarPorCNPJ(cadastroJ, pesquisarCNPJ);
				            	system("pause");
				                break;
				            case 4:
				            	agenda.adicionarPessoaJuridica(cadastroJ);
				            	system("pause");
				                break;
				            case 5:
				            	cout << "Digite o CNPJ da pessoa que deseja remover: ";
				    			cin.ignore();
				  				getline(cin, removerCNPJ);
				  				agenda.removerPessoaJuridica(cadastroJ, removerCNPJ);
				  				system("pause");
				                break;
				            case 0:
				                cout << "Saindo do programa." << endl;
				                break;
				            default:
				                cout << "Opção inválida. Tente novamente." << endl;
				        }
				    } while (opcaoJ != 0);
				    break;
			case 3:
				agenda.visualizarAgendaOrdenadaF(cadastro);
				agenda.visualizarAgendaOrdenadaJ(cadastroJ);
				system("pause");	    
			case 0:
				cout << "Saindo do programa." << endl;
				break;
			default:
				cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcaoP != 0);

	
	
	return 0;
}
