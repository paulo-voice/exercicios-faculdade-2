#include <iostream>
#include <locale>

using namespace std;

string verifica(int n){
    if (n%2==0){
        return "par";
    } else {
        return "ímpar";
    }
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
	int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;
    string resultado=verifica(numero);
	cout << "O número "<<numero<<" é "<<resultado<< "." <<endl;
	return 0;
}
