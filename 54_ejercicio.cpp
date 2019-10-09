/*
Hacer un programa que pida al usuario que digite una cadena de caracteres, luego
verificar la longitud de la cadena, y si esta  supera a 10 caracteres mostrarla 
en pantalla, en caso contrario no mostrarla
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using std::cin; using std::cout; using std::endl;

int main(){
	
	char palabra[10];
	cout <<"Ingrese una cadena de texto: "; gets(palabra);
	if(strlen(palabra)>10){
		cout<<"Esta cadena tiene mas de 10 caracteres y puede ser mostrada en pantalla: "<<endl;
		cout<<palabra;
		
	}
	else{
		cout<<"Esta cadena no tiene mas de 10 caracteres y no se puede mostrar."<<endl;
	}
	


	getch();
	return 0;
}