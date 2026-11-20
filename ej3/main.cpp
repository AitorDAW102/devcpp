#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string palabra;
	string letra;
	int contador =0;
	
	cout << "Introduce una palabra mayor o igual de 3 letras: ";
	cin >> palabra;
	
	cout << "\n Introduce la a letra a contar: ";
	cin >> letra;
	
	for (int i=0; i<palabra.length();i++) {
		if (palabra[i]==letra[0]) {
			contador++;
		}
	}
	
	if ((palabra.length()>=3) &&(contador >0)) {
		cout << "La palabra se repite " << contador << " veces";
	} else {
		cout << "La palabra no tiene 3 letras o no se repite la letra";
	}
	return 0;
}
