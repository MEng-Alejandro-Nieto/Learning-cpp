#include <iostream>
#include "Persona.h"
using namespace std;

class Medico : public Persona{
	private:
		string titulacion;
		int anos_experiencia;
	public:
		//Constructor
		Medico(string nombre, string apellido, int edad, string titulacion, int anos_experiencia) : Persona(nombre, apellido, edad){
			this-> titulacion = titulacion;
			this-> anos_experiencia = anos_experiencia;
		}
		//Destructor
		~Medico(){}
		//Getters
		string get_titulacion(){return titulacion;}
		int get_experiencia(){return anos_experiencia;}
		
		// Implementacion metodos virtuales
		void partido_futbol(){
			cout<<"El medico "<<get_nombre()<<" cura durante el partido."<<endl;
			}
		void entrenamiento(){
			cout<<"El medico "<<get_nombre()<<" cura durante el entrenamiento."<<endl;
			}
		
};
