#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ej2(int argc, char** argv) {
	int edad = 25;
	int nivelEstudio=5;
	double sueldo=30000;
	bool flag = true;
		
		
		if ((edad<=28)&&(nivelEstudio>3)&&(sueldo>28000)) {
			flag = true;
		}
		cout << "El valor de edad es: "<<edad<<"\n";
		cout << "El valor de nivelEstudios es: "<<nivelEstudio<<"\n";
		cout << "El valor de sueldo es: "<<sueldo<<"\n";
		cout << "El valor de edad es: "<<flag<<"\n";
	return 0;
}
