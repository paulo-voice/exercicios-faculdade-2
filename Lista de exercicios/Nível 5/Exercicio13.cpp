#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               IMPRIMIR NA ORDEM INVERSA           "<<endl<<endl;
	
	cout<<"Digite o N:"<<endl;
	int n;
	cin>>n;
	int vetor[n];
	for(int i=0;i<n;i++){
		cout<<"Digite o "<<i<<" numero:"<<endl;
		cin>>vetor[i];
	}
	cout<<endl;
	for(int i=n-1;i>=0;i--){
		cout<<" "<<vetor[i];
	}
	cout<<endl;

	system("pause");
    return EXIT_SUCCESS;
}

