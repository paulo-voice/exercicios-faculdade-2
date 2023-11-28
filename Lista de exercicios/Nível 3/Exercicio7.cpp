#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               OPERACOES               "<<endl<<endl;
	
	cout<< "1-Adicao"<<endl;
	cout<< "2-Subtracao"<<endl;
	cout<< "3-Multiplicacao"<<endl;
	cout<< "4-Divisao"<<endl<<endl;
	int escolha,x,y,result;
	cout<<"Digite a escolha: "<<endl;
	cin>>escolha;
	switch(escolha){
		case 1:{
			cout<<endl<<"ADICAO"<<endl<<endl;
			cout<<"Valor 1: "<<endl;
			cin>>x;
			cout<<"Valor 2: "<<endl;
			cin>>y;
			result=x+y;
			cout<<"Resultado: "<<result<<endl;
			break;
		}
		case 2:{
			cout<<endl<<"SUBTRACAO"<<endl<<endl;
			cout<<"Valor 1: "<<endl;
			cin>>x;
			cout<<"Valor 2: "<<endl;
			cin>>y;
			result=x-y;
			cout<<"Resultado: "<<result<<endl;
			break;
		}
		case 3:{
			cout<<endl<<"MULTIPLICACAO"<<endl<<endl;
			cout<<"Valor 1: "<<endl;
			cin>>x;
			cout<<"Valor 2: "<<endl;
			cin>>y;
			result=x*y;
			cout<<"Resultado: "<<result<<endl;
			break;
		}
		case 4:{
			cout<<endl<<"DIVISAO"<<endl<<endl;
			cout<<"Valor 1: "<<endl;
			cin>>x;
			cout<<"Valor 2: "<<endl;
			cin>>y;
			result=x/y;
			cout<<"Resultado: "<<result<<endl<<endl;
			break;
		}
	}
	system("pause");
    return EXIT_SUCCESS;
}
