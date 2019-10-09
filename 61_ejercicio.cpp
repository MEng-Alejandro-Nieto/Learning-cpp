/*
Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decir si son iguales o no
*/

#include <iostream>
#include <string.h>

using std::cin; using std::cout; using std::endl;

int main(){
	char palabra1[50],palabra2[50];
	cout<<"Ingrese una palabra: "; cin>>palabra1;
	cout<<"Ingrese una palabra: "; cin>>palabra2;
	strupr(palabra1); strupr(palabra2);
	if(strcmp(palabra1,palabra2)){
		cout<<"Las palabras son iguales";
	}
	else{
		cout<<"las palabras no son iguales";
	}
	
	return 0;
}


