#include <iostream>
#include "Perro.h"
using namespace std;

void Perro::MostrarDatos(){
	cout<<"El nombre del perro es: "<<nombre<<endl;
	cout<<"La raza del perro es: "<<raza<<endl;
}
void Perro::jugar(){
	cout<<"El perrito "<<nombre<<" esta jugando."<<endl;
}

