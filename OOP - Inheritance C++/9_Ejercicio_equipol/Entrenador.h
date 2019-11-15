#include <iostream>
#include "Persona.h"
using namespace std;

class Entrenador : public Persona{
	private:
		string estrategia;
	public:
		// Constructor
		Entrenador(string nombre, string apellido, int edad, string estrategia): Persona(nombre,apellido,edad){
			this-> estrategia = estrategia;
		}
		// Destructor
		~Entrenador(){}
		// Getters
		string get_estrategia(){return estrategia;}

		//Implementacion metodos virtuales
		void partido_futbol(){
			cout<<"El Entrenador "<<get_nombre()<<" dirige en el campo."<<endl;
			}
		void entrenamiento(){
			cout<<"El Entrenador "<<get_nombre()<<" dirige el entrenamiento."<<endl;
			}
}; 

