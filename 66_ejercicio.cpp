/*
Realice un programa que lea una cadena de caracteres de la entrada estandar y muestre en la 
salida estandar cuantas ocurrencias de cada vocal existen
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using std::cin; using std::cout; using std::endl;

int main(){
	char frase[30]; cin.getline(frase,30,'\n');
	int  a{0},e{0},i{0},o{0},u{0},length{0};
	length=strlen(frase);
	
	for (int j{0};j<length;j++){
		switch(frase[j]){
			case 'a':a++;	break;			
			case 'e':e++;	break;
			case 'i':i++;	break;
			case 'o':o++;	break;
			case 'u':u++;	break;								
		}
	}
	cout<<"a: "<<a<<endl; cout<<"e: "<<e<<endl; cout<<"i: "<<i<<endl; cout<<"o: "<<o<<endl; cout<<"u: "<<u<<endl;
	getch();
	return 0;
}



