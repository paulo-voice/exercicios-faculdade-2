#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               INTEIROS              "<<endl<<endl;
	
    int num1, num2,opcao;
    cout << "Digite o primeiro inteiro: "<<endl;
    cin >> num1;
    cout << "Digite o segundo inteiro: "<<endl;
    cin >> num2;
    while (true) {
        cout <<endl<<"Escolha uma opcao"<<endl;
        cout << "1-Verificar se um dos numeros eh multiplo do outro"<<endl<< "2-Verificar se ambos numeros sao pares"<<endl;
        cout << "3-Verificar se a media dos numeros eh maior ou igual a 7"<<endl<< "4-Sair"<<endl;
        cin >> opcao;
        switch(opcao){
            case 1:
                if (num1%num2==0 || num2%num2==0) {
                    cout << "Eles sao multiplos" << endl;
                } else {
                    cout << "Nao sao multiplos" << endl;
                }
                break;
            case 2:
                if (num1%2==0 && num2%2==0) {
                    cout << "Sao pares" << endl;
                } else {
                    cout << "Nao sao pares" << endl;
                }
                break;
            case 3:
                if ((num1+num2)/2>=7) {
                    cout << "A media eh maior que 7" << endl;
                } else {
                    cout << "A media eh menor que 7" << endl;
                }
                break;
            case 4:
                cout << "Saindo do programa." << endl;
                return 0;
        }
    }
	system("pause");
    return EXIT_SUCCESS;
}

