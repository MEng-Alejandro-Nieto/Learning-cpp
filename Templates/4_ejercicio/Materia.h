#include <iostream>
using namespace std;

template <class T>
class Materia{
	private:
		string nombre;
		T calificacion;
	public:
		// Constructor
		Materia(string nombre,T calificacion){
			this-> nombre = nombre;
			this-> calificacion = calificacion;
		}
		// Destructor
		~Materia(){}
		//Getter y Setter
		void get_calificacion(){cout<<nombre<<": "<<calificacion<<endl;}
		void set_calificacion(T calificacion){this-> calificacion = calificacion;}
		
};
