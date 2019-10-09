//cin, gets() and cin.getlin() functions

#include <iostream>
#include <conio.h>
#include <string.h>

using std::cin; using std::cout; using std::endl;

int main(){
	
	char palabra[10];
	cout<<"Ingrese una cadena de caracteres: ";
 
	//Almacenar con cin
	//cin>>palabra;

	//Almacenar con gets()
	//gets(palabra);

	//Almacenar con cin.getline()
	cin.getline(palabra,20,'\n');


	cout<<palabra;




	getch();
	return 0;
}