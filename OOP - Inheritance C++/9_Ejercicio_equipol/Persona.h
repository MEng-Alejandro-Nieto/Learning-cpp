#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;


class Persona {
	protected:
		string nombre, apellido;
		int edad;
	public:
		Persona(string nombre, string apellido, int edad){
			this-> nombre = nombre;
			this-> apellido = apellido;
			this-> edad = edad;
		}
		Persona(){
		}
		//Getters
		string get_nombre(){return nombre;}
		string get_apellido(){return apellido;}
		int get_edad(){return edad;}
		//Methods
		void viajar(){
			cout<<get_nombre()<<" esta viajando."<<endl;
		}
		virtual void partido_futbol() = 0;
		virtual void entrenamiento() = 0;
};
#endif
