/*
Considere la siguiente relacion de herencia; Defina las clases Mamifero, Felino y
GatoDomestico. Decida que atributos y metodos incluir de tal manera que su programa pueda:

1) Declarar un objeto llamado minino de tipo GatoDomestico y otro llamado estrellaCirco
de tipo Felino.
2) Imprimir la dieta de minino y de estrellaCirco.
3) Imprimir el anio y lugar de nacimiento de minino y estrellaCirco
4) Cambiar el nombre del dueno de minino
5) Imprimir la raza de minino y de estrella circo
6) Cambiar el nombre del circo en el cual actua estrellaCirco
*/


#include <iostream>
#include "Felino.h"
#include "GatoDomestico.h"
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	Felino* estrellaCirco = new Felino("EstrellaCirco","Ibague","Pitbull",1993,"Gasca");
	GatoDomestico* minino = new GatoDomestico("minino","Bogota","persa",2000,"Alejandro");
	
	estrellaCirco->dieta();
	cout<<"Felino: "<<estrellaCirco->get_nombre()<<endl;
	cout<<"Gato:"<<minino->get_nombre()<<endl;
	cout<<endl;
	cout<<"Felino: "<<estrellaCirco->get_lugar()<<endl;
	cout<<"Gato: "<<minino->get_lugar()<<endl;
	cout<<endl;	
	cout<<"Felino: "<<estrellaCirco->get_anio()<<endl;
	cout<<"Gato: "<<minino->get_anio()<<endl;
	cout<<endl;
	estrellaCirco->dieta();
	minino->dieta();
	cout<<endl;
	
	string nuevocirco, nuevodueno;
	
	cout<<"Ingrese el nuevo circo: ";
	getline(cin,nuevocirco);
	
	estrellaCirco->set_circo(nuevocirco);
	cout<<"Felino: "<<estrellaCirco->get_circo();	
	
	cout<<"Ingrese el nuevo dueno: ";
	getline(cin,nuevodueno);
		
	minino->set_dueno(nuevodueno);
	cout<<"Gato: "<<minino->get_dueno();
	
	return 0;
}




