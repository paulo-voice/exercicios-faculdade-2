#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               ESTOQUE MEDIO              "<<endl<<endl;
	int max,min,media;
	cout<<"Digite o maximo de seu estoque: "<<endl;
	cin>>max;
	cout<<"Digite o minimo de seu estoque: "<<endl;
	cin>>min;
	if(min>=max){
		cout<<"O minimo nao pode ser igual ou maior que o maximo!"<<endl<<"Digite novamente"<<endl;
		cin>>min;
	}else{
		media=(min+max)/2;
		cout<<"A media de seu estoque eh: "<<media<<endl;
	}
	system("pause");
    return EXIT_SUCCESS;
}

