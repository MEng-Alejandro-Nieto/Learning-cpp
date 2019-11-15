#ifndef FELINO_H
#define FELINO_H

#include <iostream>
#include "Mamifero.h"
#include <string.h>
using namespace std;

class Felino : public Mamifero  {
	private:
		string circo;
	
	public:
		
		Felino(string nombre, string lugar, string raza, int anio, string circo) : Mamifero(nombre,lugar,raza,anio){
			this->circo = circo;
		}
		Felino(string nombre, string lugar, string raza, int anio) : Mamifero(nombre,lugar,raza,anio){
			
		}
		void dieta(){
			cout<<"El felino "<<get_nombre()<<" come comida del circo."<<endl;
		}
		
		string set_circo(string nuevocirco){
			this->circo = nuevocirco;
		}
		string get_circo(){
			return circo;
		}
};
#endif


