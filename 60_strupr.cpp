/*
Pasar una palabra a mayuscula
*/

#include <iostream>
#include <string.h>
#include <conio.h>

using std::cin; using std::cout; using std::endl;

int main(){
	char palabra[50];
	cout<<"Ingrese una palabra para transformarla a mayusuclas: "; cin>>palabra;
	strupr(palabra);
	cout<<palabra;
	
	getch();
	return 0;
}
