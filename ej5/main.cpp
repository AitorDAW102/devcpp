#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	String nombres;
	String telefonos[]=new String[50];
	int contador =0;
	int option =0;
	do {
		System.out.println("====================================================");
		System.out.println("MENU");
		System.out.println();
		System.out.println("1. Introducir un contacto");
		System.out.println("2. Leer agenda");
			System.out.println("Introduce una opcion (0 para salir)");
		System.out.println("====================================================");
		System.out.print(": ");
		option=sc.nextInt();sc.nextLine();			
		if (option == 1) {
			System.out.println("Introduce el nombre: ");
			nombres[contador]=sc.nextLine();
			System.out.println("Introduce el telefono: ");
			telefonos[contador]=sc.nextLine();
			contador++;
		} else if (option == 2) {
			for(int i=0; i<contador;i++) {
				System.out.println("nombre: "+nombres[i]+", telefono: "+telefonos[i]);
		}
		} else if (option!=0){
		System.out.println("Opcion incorrecta");
		}
	} while (option!=0);
	return 0;
}
