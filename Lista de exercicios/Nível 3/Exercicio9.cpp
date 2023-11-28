#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               PESO IDEAL               "<<endl<<endl;
	cout<<"Digite sua altura"<<endl;
	float altura;
	cin>>altura;
	cout<<"Digite 1 pra homem e 2 pra mulher"<<endl;
	int sexo;
	cin>>sexo;
	float peso;
	if(sexo==1){
		peso=(72.7*altura)-58;
		cout<<"O seu peso ideal eh: "<<peso<<endl;
	}else if(sexo==2){
		peso=(62.1*altura)-44.7;
		cout<<"O seu peso ideal eh: "<<peso<<endl;
	}else{
		cout<<"Entrada invalida"<<endl;
	}
	system("pause");
    return EXIT_SUCCESS;
}
