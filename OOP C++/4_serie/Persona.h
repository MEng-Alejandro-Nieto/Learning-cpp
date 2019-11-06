#include <iostream>
#include <string.h>
using namespace std;

class Persona {
	//Atributos
	private:
		string nombre;
		int edad;
	
	//Metodos	
	public:
		Persona (string _nombre, int _edad){
			nombre=_nombre;
			edad=_edad;
		}
		Persona(string _nombre){
			edad=25;
			nombre=_nombre;
		}
		Persona(int _edad){
			edad=_edad;
			nombre="Alejandro";
		}
		void mostrar(){
			cout<<"El nombre es: "<<nombre<<endl;
			cout<<"La edad es: "<<edad<<endl;
		}
	
};
