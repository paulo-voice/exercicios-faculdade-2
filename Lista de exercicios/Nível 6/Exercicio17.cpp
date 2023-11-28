#include <iostream>
#include <locale>

using namespace std;

int reajuste(int salario, int indice) {
    return salario * (1 + (indice / 100.0));
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
	int salario,indice;
	
    cout << "Digite o valor do salário: ";
    cin >> salario;
    cout << "Digite o índice de reajuste: ";
    cin >> indice;
    int salario_atualizado = reajuste(salario, indice);
	cout << "O salário atualizado é: R$" <<salario_atualizado<<endl;
	return 0;
}
