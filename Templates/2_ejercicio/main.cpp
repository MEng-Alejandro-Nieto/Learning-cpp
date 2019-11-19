/*
Definir dos plantillas de funciones dentro de un archivo de cabecera llamado "ordenar.h" 
que pueda ordenar tanto ascendentemente como descendentemente un arreglo de N elementos.
*/

#include <iostream>
#include "Ordenar.h"
using namespace std;

int main(int argc, char** argv) {
	int n{0};
	cout<<"Ingrese cuantos elementos tendra el arreglo: "; cin>>n;
	float* arreglo = new float[n];
	
	preguntar(arreglo,n);
	ascendente(arreglo,n);
	mostrar(arreglo,n);
	descendente(arreglo,n);
	mostrar(arreglo,n);
	
	return 0;
}
