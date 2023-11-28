#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               MODULO               "<<endl<<endl;
	
	int x,result;
	cout<<"Numero inteiro: "<<endl;
	cin>>x;
	if(x>=0){
		result=x;
		cout<<"O modulo de "<<x<<" eh "<<result<<endl;
	}else if(x<0){
		result=x*(-1);
		cout<<"O modulo de "<<x<<" eh "<<result<<endl;
	}

	system("pause");
    return EXIT_SUCCESS;
}
