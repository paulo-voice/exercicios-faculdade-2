#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               10 valores            "<<endl<<endl;
	int n=10,valor[n],maior,menor,soma,media;
	cout<<"Digite os 10 valores:"<<endl;
	for(int i=0;i<n;i++){
		cin>>valor[i];
		if(valor[n]<0){
			cout<<"Apenas numeros positivos"<<endl;
			i--;
			continue;
		}
		if(i==0){
			maior = menor = valor[i];
		}
		if(valor[i]>maior){
			maior=valor[i];
		}else if(valor[i]<menor){
			menor=valor[i];
		}
		soma+=valor[i];
	}
	media=soma/n;
	cout<<"Maior valor: "<<maior<<endl;
	cout<<"Menor valor: "<<menor<<endl;
	cout<<"Media: "<<media<<endl;
	system("pause");
    return EXIT_SUCCESS;
}

