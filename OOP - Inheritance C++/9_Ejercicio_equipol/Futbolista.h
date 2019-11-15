#include <iostream>
#include "Persona.h"
using namespace std;

class Futbolista : public Persona{
	private:
		string posicion;
		int dorsal;
	public:
		// Constructor
		Futbolista(string nombre, string apellido, int edad, int dorsal, string posicion) : Persona(nombre,apellido,edad){
			this-> posicion = posicion;
			this-> dorsal = dorsal;
			}
		// Destructor
		~Futbolista(){}
		//Getters
		int get_dorsal(){return dorsal;}
		string get_posicion(){return posicion;}
		
		//Implementacion metodos virtuales
		void partido_futbol(){
			cout<<"El futbolista "<<get_nombre()<<" Juega en el campo."<<endl;
			}
		void entrenamiento(){
			cout<<"El futbolista "<<get_nombre()<<" entrena en el campo."<<endl;
			}
};


