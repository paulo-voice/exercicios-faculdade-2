#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "               ORDEM CRESCENTE               "<<endl<<endl;
	
	int x,y,z,temp;
	cout<<"De 3 valores: "<<endl;
	cin>>x;
	cin>>y;
	cin>>z;
    if (x > y){
        temp = x;
        x = y;
        y = temp;
    }
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    cout << "Os numeros em ordem crescente sao: " << x << ", " << y << ", " << z << endl;
	system("pause");
    return EXIT_SUCCESS;
}
