#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               IMPRIMIR NA ORDEM INVERSA           "<<endl<<endl;
	int n,menor=0,media=0;
	cout<<"Digite quantos alunos: "<<endl;
	cin>>n;
	int aluno[n];
	for(int i=1;i<=n;i++){
		cout<<"Digite a nota do "<<i<<" aluno:";
		cin>>aluno[i];
		media=media+aluno[i];
		if(aluno[i]<7){
			menor++;
		}
	}
	media=media/n;
	cout<<"A media dos alunos eh: "<<media<<endl;
	if(menor==n){
		cout<<"Nao ha alunos com nota acima de 7"<<endl;
	}

	

	system("pause");
    return EXIT_SUCCESS;
}

