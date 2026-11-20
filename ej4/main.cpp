#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int identificarNumero;
	bool esPrimo = true;
	int divisor=2;
	
	cout << "Dime un numero para saber si es primo: ";
	cin >> identificarNumero;
	
	for (;divisor<identificarNumero;divisor++) {
		if (identificarNumero%divisor==0) {
			esPrimo = false;
			break;
		}
	}
	
	if (esPrimo) {
		cout << "El numero" << identificarNumero << " es primo";
	} else {
		cout << "El numero " << identificarNumero << " es un numero compuesto, es divisible entre " << divisor;
	}
	return 0;
}
