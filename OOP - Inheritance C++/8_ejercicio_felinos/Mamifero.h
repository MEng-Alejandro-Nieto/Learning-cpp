#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>
using namespace std;

class Mamifero{
	private:
		string nombre;
		string lugar;
		string raza;
		int anio;
	public:
		Mamifero(string nombre, string lugar, string raza,int anio){
			this->nombre = nombre;
			this->lugar = lugar;
			this->raza = raza;
			this->anio = anio;
		}
		virtual void dieta() = 0;
		
		string get_raza() {return raza;}
		string get_nombre(){return nombre;}
		int get_anio() {return anio;}
		string get_lugar() {return lugar;}
		
			
};
#endif
