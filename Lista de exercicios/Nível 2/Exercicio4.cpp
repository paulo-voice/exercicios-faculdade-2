#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               TROCA DE VALORES               "<<endl<<endl;
	
	float x,y,troca;
	cout<<"Primeiro valor: "<<endl;
	cin >> x;
	cout<<"Segundo valor: "<<endl;
	cin >>y;
	troca=x;
	x=y;
	y=troca;
	
	cout<<"Valor x: "<<x<<endl<<"Valor y: "<<y<<endl;

	system("pause");
    return EXIT_SUCCESS;
}
