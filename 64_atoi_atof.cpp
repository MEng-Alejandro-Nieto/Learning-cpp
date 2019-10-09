/*
atoi() - atof() para transformar una cadena a numeros - 
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using std::cin; using std::cout; using std::endl;

int main(){
	char palabra1[20]="30"; char palabra2[20]="25";
	int numero1, numero2;
	numero1=atoi(palabra1);
	numero2=atof(palabra2);
	cout<<numero1<<endl;
	cout<<numero2<<endl;
	getch();
	return 0;
}

