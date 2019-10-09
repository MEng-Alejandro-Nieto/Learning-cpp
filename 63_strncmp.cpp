/* 
la funcion strncmp() 
*/

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using std::cin; using std::cout; using std::endl;

int main(){
	
	char nombre[20];
	cout<<"Ingrese su primer nombre en mayusculas: "; cin>>nombre;
	if(strncmp(nombre,"A",1)==0){
		strupr(nombre);
		cout<<nombre<<endl;
	}
	else{
		cout<<"el nombre no empieza con 'A'";
	}
	
	getch();
	return 0;
}
