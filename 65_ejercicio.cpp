/*
Pedir al usuario 2 cadenas de caracters de numeros, uno entero y el otro real, convertirlos
a sus respectivos valores y por ultimo sumarlos
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
//using std::cin; using std::cout; using std::endl; using std::get.inline();
using namespace std;

int main(){
	char palabra1[20]; char palabra2[20];
	int entero; float flotante;

	cout<<"Ingrese dos numeros para convertirlos a datos detipo entero y flotante respectivamente: "<<endl;
	cin.getline(palabra1,20); 
	cin.getline(palabra2,20);
	entero=atoi(palabra1); flotante=atof(palabra2);

	cout<<"la suma de los dos valores es: "<<entero+flotante<<endl;
	
	getch();
	return 0;
}
