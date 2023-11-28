#include <iostream>
#include <locale>

using namespace std;

int verifica_quadrante(int x, int y) {
    if (x>0&&y>0){
        return 1;
    } else if (x<0&&y>0){
        return 2;
    } else if (x<0&&y<0){
        return 3;
    } else if (x>0&&y<0){
        return 4;
    } else {
        return 0;
    }
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
	int x, y;
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;
    int quadrante=verifica_quadrante(x,y);
    if (quadrante==0) {
        cout << "O ponto está na origem (0, 0)" <<endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está no quadrante " << quadrante <<endl;
    }
	
	return 0;
}
