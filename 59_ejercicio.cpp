/*
Determinar si una palabra ingresada es polindroma
*/


#include <iostream>
#include <string.h>

using std::cin; using std::cout; using std::endl;

int main(){
	char palabra[50], palabra2[50];
	cout<<"Ingrese la palabra: "; gets(palabra);
	strcpy(palabra2,palabra);
	strrev(palabra2);
	if (palabra==palabra2){
		cout<<"La palabra ES un polindromo";
	}
	else{
		cout<<"La palabra No es un polindromo";
	}
	return 0;
}