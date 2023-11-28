#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	float cotacao, dolar, real;
	cout << "Cotacao atual do dolar: "<<endl;
	cin  >> cotacao;
	cout << "Valor em dolar: " <<endl;
	cin >> dolar;
	
	real = cotacao*dolar;
	
	cout<<"R$" <<real<<endl;
	
	system("pause");
    return EXIT_SUCCESS;
}
