#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               CELSIUS PARA FAHRENHEIT               "<<endl<<endl;
	
	cout << "Digite a temperatura em celsius: " <<endl;
	float celsius, fahr;
	cin >> celsius;
	
	fahr=(9*celsius+160)/5;
	
	cout << "O resultado eh: " << fahr << " graus fahrenheit." <<endl;

	system("pause");
    return EXIT_SUCCESS;
}
