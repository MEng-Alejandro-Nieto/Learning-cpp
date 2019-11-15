#include <iostream>
#include "Felino.h"
#include <string.h>
using namespace std;

class GatoDomestico : public Felino{
	private:
		string dueno;
	
	public:
		GatoDomestico(string nombre, string lugar, string raza, int anio, string dueno) : Felino(nombre,lugar,raza,anio) {
			this-> dueno = dueno;
		}
		void dieta(){
			cout<<"El gato "<<get_nombre()<<" come comida para gato."<<endl;
		}
		
		string set_dueno(string nuevodueno){
			this-> dueno = nuevodueno;
		}
		string get_dueno(){
			return dueno; 
		}

};
