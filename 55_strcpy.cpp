// Copiar un string con la funcion strcpy()

#include <iostream>
#include <string.h>

using std::cin; using std::cout; using std::endl;


int main(){
	char nombre[10]="Alejandro";
	char nombre2[10];

	strcpy(nombre2,nombre);
	cout<<"La copia del nombre es: "<<nombre2;

	return 0;
	
}
