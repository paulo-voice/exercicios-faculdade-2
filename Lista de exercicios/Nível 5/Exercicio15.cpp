#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "            VALORES IDENTICOS NA MESMA POSICAO             "<<endl<<endl;
	int N=50,count=0;
	int v1[N],v2[N],n,repetido[N];
	cout<<"Digite o número de elementos (max 50):"<<endl;
	cin>>n;
	cout<<"Digite os numeros no vetor 1:"<<endl;
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	cout<<"Digite os numeros no vetor 2:"<<endl;
	for(int i=0;i<n;i++){
		cin>>v2[i];
	}
	for(int i=0;i<n;i++){
		if(v1[i]==v2[i]){
			count++;
			repetido[i]=v1[i];
			cout<<"Numeros repetidos:"<<repetido[i]<<endl;
		}
	}
	cout<<"Numeros identicos nas mesmas posicoes: "<<count<<endl;
	
	system("pause");
    return EXIT_SUCCESS;
}

