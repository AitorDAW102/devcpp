#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string nombres[50];
	string telefonos[50];
	int contador =0;
	int option =0;
	do {
		cout << "\n ====================================================";
		cout << "\n MENU";
		cout << "\n 1. Introducir un contacto";
		cout << "\n 2. Leer agenda";
		cout << "\n Introduce una opcion (0 para salir)";
		cout << "\n ====================================================";
		cout << "\n : ";
		cin >> option;			
		if (option == 1) {
			cout << "\n Introduce el nombre: ";
			cin >> nombres[contador];
			cout << "\n Introduce el telefono: ";
			cin >> telefonos[contador];
			contador++;
		} else if (option == 2) {
			for(int i=0; i<contador;i++) {
				cout << "\n nombre: " << nombres[i] << ", telefono: " << telefonos[i];
		}
		} else if (option!=0){
		cout << "\n Opcion incorrecta";
		}
	} while (option!=0);
	return 0;
}
